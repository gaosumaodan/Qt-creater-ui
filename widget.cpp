#include "widget.h"
#include "ui_widget.h"
#include <QPaintEvent>
#include <QPainter>
#include <QIcon>
#include <QPixmap>
#include <QPushButton>
#include "mypushbutton.h"
#include <QDebug>
#include <QFont>
#include <QFileDialog>
#include <QDir>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    //音乐播放
    player = new QMediaPlayer(this);
    playlist = new QMediaPlaylist(this);
    playlist->setPlaybackMode(QMediaPlaylist::Loop);//设置循环模式
    player->setPlaylist(playlist);//获取将播放列表要播放的文件
    QStringList fileList = {"D:/fb/Qt/WangYiYun/widget/music.mp3", "D:/fb/Qt/WangYiYun/widget/music2.mp3"};
    for(m = 0; m < 2; m++){
        QString aFile = fileList.at(m);
        playlist->addMedia(QUrl::fromLocalFile(aFile));
    }
    if(player->state()!=QMediaPlayer::PlayingState){
        playlist->setCurrentIndex(0);
    }
    player->play();

    //定义一个menubar变量
    menuBar = new MenuBar(this);
    menuBar->move(0, 75);
    menuBar->show();
    //定义一个mainscene变量
    mainScene = new MainScene(this);
    mainScene->move(menuBar->width(), 75);
    mainScene->show();
    //定义一个individual变量
    individual = new Individual(mainScene);
    individual->move(0, 68);
    individual->show();
    setWindowIcon(QIcon(":/img/logo.png"));
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint); //隐藏边框
    //设置界面大小
    this->setMinimumSize(1277, 838);
    this->setMaximumSize(1920, 1080);
    this->resize(1277, 838);
    //设置标题栏按钮,并设置鼠标拖至变为手型
    QPixmap pix;
    MyPushButton(":/img/tbn_close.png", ui->tbn_close1, ui->tbn_close);
    MyPushButton(":/img/tbn_max.png", ui->tbn_max1, ui->tbn_max);
    MyPushButton(":/img/tbn_min.png", ui->tbn_min1, ui->tbn_min);
    MyPushButton(":/img/min.png", ui->min1, ui->min);
    MyPushButton(":/img/tbn_mail.png", ui->tbn_mail1, ui->tbn_mail);
    MyPushButton(":/img/tbn_setting.png", ui->tbn_setting1, ui->tbn_setting);
    MyPushButton(":/img/tbn_clothing.png", ui->tbn_clothing1, ui->tbn_clothing);
    MyPushButton(":/img/title_user.png", ui->title_user1, ui->title_user);
    MyPushButton(":/img/tbn_listening.png", ui->tbn_listening1, ui->tbn_listening);
    MyPushButton(":/img/title_searching.png", ui->title_searching1, ui->title_searching);
    MyPushButton(":/widget/start.png", ui->pause1, ui->pause);
    MyPushButton(":/widget/next.png", ui->next1, ui->next);
    MyPushButton(":/widget/last.png", ui->last1, ui->last);
    MyPushButton(":/widget/range.png", ui->range1, ui->range);
    MyPushButton(":/widget/lyric.png", ui->lyric1, ui->lyric);
    ui->title_searching->setCursor(QCursor(Qt::IBeamCursor));
    MyPushButton(":/img/change_right.png", ui->change_right1, ui->change_right);
    MyPushButton(":/img/change_left.png", ui->change_left1, ui->change_left);
    MyPushButton(":/widget/voice.png", ui->voice1, ui->voice);
    ui->tbn1->setPixmap(QPixmap(":/widget/tbn.png"));
    ui->tbn2->setPixmap(QPixmap(":/widget/tbn1.png"));
    pix.load(":/img/separate.png");
    ui->separate->setPixmap(pix);
    ui->wyy->setAttribute(Qt::WA_TranslucentBackground);
    ui->wyy->setCursor(QCursor(Qt::PointingHandCursor));
    ui->voiceChange->hide();
    ui->voicechange->hide();
    connect(ui->voice, &QPushButton::clicked, [=] () {
        if(v == 0){
            v = 1;
            ui->voiceChange->show();
            ui->voicechange->show();
        }
        else{
            v = 0;
            ui->voiceChange->hide();
            ui->voicechange->hide();
        }
    });

    //应用关闭按钮
    connect(ui->tbn_close, &QPushButton::clicked, [=] () {
        this->close();
    });
    //应用最大化按钮
    connect(ui->tbn_max, &QPushButton::clicked, [=] () {
        QPixmap pix;
        if(Widget::isMaximized()){
            //还原初始界面大小
            Widget::showNormal();
            this->menuBar->showMinimized();
            pix.load(":/img/tbn_max.png");
            individual->resize(1028, 607);
            ui->tbn_max1->setPixmap(pix);
        }
        else{
            //使界面最大化
            Widget::showMaximized();
            pix.load(":/img/tbn_restore.png");
            individual->resize(1671, 916);
            ui->tbn_max1->setPixmap(pix);
        }
    });
    //应用最小化按钮
    connect(ui->tbn_min, &QPushButton::clicked, [=] () {
        Widget::showMinimized();
    });
    ui->cd->setPixmap(QPixmap(":/widget/cd.png"));

    settext(ui->label, "能解答一切的答案");
    settext(ui->label_2, "周深");

    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(onPositionChanged(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),this,SLOT(onDurationChanged(qint64)));

    connect(ui->pause, &QPushButton::clicked, [=] () {
        if(p == 0){
            player->pause();
            p = 1;
            ui->pause1->setPixmap(QPixmap(":/widget/pause.png"));
        }
        else{
            player->play();
            p = 0;
            ui->pause1->setPixmap(QPixmap(":/widget/start.png"));
        }
    });
    m = 0;
    connect(ui->next, &QPushButton::clicked, [=] () {
        m++;
        if(m == 2) m = 0;
        c = 1;
        playlist->setCurrentIndex(m);
        player->play();
    });
    connect(ui->last, &QPushButton::clicked, [=] () {
        m--;
        if(m == -1) m = 1;
        c = 1;
        playlist->setCurrentIndex(m);
        player->play();
    });
    connect(ui->range, &QPushButton::clicked, [=] () {
        r++;
        if(r == 2) r = 0;
        if(r == 0){
            ui->range1->setPixmap(QPixmap(":/widget/range.png"));
            playlist->setPlaybackMode(QMediaPlaylist::Loop);
        }
        else{
            ui->range1->setPixmap(QPixmap(":/widget/alone.png"));
            playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
        }
    });
    connect(playlist, &QMediaPlaylist::currentMediaChanged, [=] () {
        if(playlist->playbackMode() == QMediaPlaylist::CurrentItemInLoop){
        }
        else if(c == 0){
            m++;
        }
        else{
            c = 0;
        }
        if(m == 2) m = 0;
        if(m == 0){
            ui->cd->setPixmap(QPixmap(":/widget/cd.png"));
            ui->label->setText("能解答一切的答案");
            ui->label_2->setText("周深");
        }
        else{
            ui->cd->setPixmap(QPixmap(":/widget/cd2.png"));
            ui->label->setText("不为谁而作的歌");
            ui->label_2->setText("林俊杰");
        }
    });
}

Widget::~Widget()
{
    delete ui;
}


void Widget::resizeEvent(QResizeEvent *event)
{
    int currentW = this->size().width(); // 用以记录当前窗体宽度
    int currentH = this->size().height(); // 用以记录当前窗体高度
    ui->tbn_close->setGeometry(currentW - 57, 20, ui->tbn_close->width(), ui->tbn_close->height());
    ui->tbn_close1->setGeometry(currentW - 57, 20, ui->tbn_close1->width(), ui->tbn_close1->height());
    ui->tbn_max->setGeometry(currentW - 102, 20, ui->tbn_max->width(), ui->tbn_max->height());
    ui->tbn_max1->setGeometry(currentW - 102, 20, ui->tbn_max1->width(), ui->tbn_max1->height());
    ui->tbn_min->setGeometry(currentW - 147, 20, ui->tbn_min->width(), ui->tbn_min->height());
    ui->tbn_min1->setGeometry(currentW - 147, 20, ui->tbn_min1->width(), ui->tbn_min1->height());
    ui->min->setGeometry(currentW - 192, 20, ui->min->width(), ui->min->height());
    ui->min1->setGeometry(currentW - 192, 20, ui->min1->width(), ui->min1->height());
    ui->separate->setGeometry(currentW - 210, 20, ui->separate->width(), ui->separate->height());
    ui->tbn_mail->setGeometry(currentW - 252, 20, ui->tbn_mail->width(), ui->tbn_mail->height());
    ui->tbn_mail1->setGeometry(currentW - 252, 20, ui->tbn_mail1->width(), ui->tbn_mail1->height());
    ui->tbn_setting->setGeometry(currentW - 297, 20, ui->tbn_setting->width(), ui->tbn_setting->height());
    ui->tbn_setting1->setGeometry(currentW - 297, 20, ui->tbn_setting1->width(), ui->tbn_setting1->height());
    ui->tbn_clothing->setGeometry(currentW - 342, 20, ui->tbn_clothing->width(), ui->tbn_clothing->height());
    ui->tbn_clothing1->setGeometry(currentW - 342, 20, ui->tbn_clothing1->width(), ui->tbn_clothing1->height());
    ui->title_user->setGeometry(currentW - 550, 15, ui->title_user->width(), ui->title_user->height());
    ui->title_user1->setGeometry(currentW - 550, 15, ui->title_user1->width(), ui->title_user1->height());
    ui->change_left->setGeometry(283, 22, ui->change_left->width(), ui->change_left->height());
    ui->change_left1->setGeometry(283, 22, ui->change_left1->width(), ui->change_left1->height());
    ui->change_right->setGeometry(323, 22, ui->change_right->width(), ui->change_right->height());
    ui->change_right1->setGeometry(323, 22, ui->change_right1->width(), ui->change_right1->height());
    ui->title_searching->setGeometry(373, 18, ui->title_searching->width(), ui->title_searching->height());
    ui->title_searching1->setGeometry(373, 18, ui->title_searching1->width(), ui->title_searching1->height());
    ui->tbn_listening->setGeometry(580, 18, ui->tbn_listening->width(), ui->tbn_listening->height());
    ui->tbn_listening1->setGeometry(580, 18, ui->tbn_listening1->width(), ui->tbn_listening1->height());
    ui->cd->move(15, currentH - 77);
    ui->horizontalSlider->move((currentW - ui->horizontalSlider->width()) / 2, currentH - 23);
    ui->label->move(ui->cd->x() + 69, ui->cd->y());
    ui->label_2->move(ui->label->x(), ui->label->y() + 30);
    ui->pause->move((currentW - ui->pause->width()) / 2, ui->horizontalSlider->y() - 57);
    ui->pause1->move((currentW - ui->pause1->width()) / 2, ui->horizontalSlider->y() - 57);
    ui->last->move(ui->pause->x() - 60, ui->pause->y() + 9);
    ui->last1->move(ui->pause->x() - 60, ui->pause->y() + 9);
    ui->next->move(ui->pause->x() + 84, ui->pause->y() + 9);
    ui->next1->move(ui->pause->x() + 84, ui->pause->y() + 9);
    ui->lyric->move(ui->next->x() + 60, ui->next->y());
    ui->lyric1->move(ui->next->x() + 60, ui->next->y());
    ui->range->move(ui->last->x() - 60, ui->last->y());
    ui->range1->move(ui->last->x() - 60, ui->last->y());
    ui->voice->move(currentW - 160, currentH - 65);
    ui->voice1->move(currentW - 160, currentH - 65);
    ui->tbn1->move(ui->voice->x() - 115, ui->voice->y());
    ui->tbn2->move(ui->voice->x() + 50, ui->voice->y());
    ui->starttime->move(ui->horizontalSlider->x() - 50, (ui->horizontalSlider->y() - ui->starttime->height() / 2));
    ui->endtime->move(ui->horizontalSlider->x() +450, (ui->horizontalSlider->y() - ui->endtime->height() / 2));
    ui->voicechange->move(ui->voice->x(), ui->voice->y() - 114);
    ui->voiceChange->move(ui->voicechange->x() + 15, ui->voicechange->y() + 20);
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPixmap pixmap;
    if(Widget::isMaximized())
        pixmap.load(":/img/max_ui.png");
    else
        pixmap.load(":/img/ui.png");
    painter.drawPixmap(this->rect(), pixmap);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        whereismouse = event->pos();
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{

    if(whereismouse.y() < 75 && whereismouse.y() > 0){

        if(event->buttons() == Qt::LeftButton){
            //当窗口最大化或最小化时也不进行触发
            if(Widget::isMaximized() || Widget::isMinimized()){
                return;

            }
            else{
                //当在按钮之类需要鼠标操作的地方不进行触发(防误触)
                if (ui->tbn_close->underMouse()||ui->tbn_max->underMouse()||ui->tbn_min->underMouse()||ui->min->underMouse()||ui->tbn_mail->underMouse()||ui->tbn_clothing->underMouse()||ui->title_user->underMouse()||ui->change_left->underMouse()||ui->change_right->underMouse()||ui->title_searching->underMouse()||ui->tbn_listening->underMouse()||ui->tbn_setting->underMouse()||ui->horizontalSlider->underMouse()){
                }
                else{
                    Widget::move(Widget::mapToGlobal(event->pos()-whereismouse));//移动
                }
            }
         }
         event->accept();
    }
}

void Widget::settext(QLabel *lab, QString str)
{
    font.setFamily("黑体");
    font.setPointSize(10);
    lab->setWordWrap(true);
    lab->setFont(font);
    lab->setText(str);
}

void Widget::on_horizontalSlider_valueChanged()
{
    player->setPosition(ui->horizontalSlider->value());
}

void Widget::onDurationChanged(qint64 duration)
{
    ui->horizontalSlider->setMaximum(duration); //设置进度条最大值 也就是歌曲时长 ms
    int secs = duration/1000; //全部秒数
    int mins = secs/60;//分
    secs = secs % 60;//秒
    durationTime = QString::asprintf("%d:%d",mins,secs);
    ui->endtime->setText(durationTime);
}

void Widget::onPositionChanged(qint64 position)
{
    if(ui->horizontalSlider->isSliderDown()){
        on_horizontalSlider_valueChanged();
        return;//如果手动调整进度条，则不处理
    }
    ui->horizontalSlider->setSliderPosition(position);
    int secs = position/1000;
    int mins = secs/60;
    secs = secs % 60;
    positionTime = QString::asprintf("%d:%d",mins,secs);
    ui->starttime->setText(positionTime);
}

void Widget::on_voiceChange_valueChanged(int value)
{
    player->setVolume(value);
}
