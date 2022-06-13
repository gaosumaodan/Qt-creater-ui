#include "individual.h"
#include "ui_individual.h"
#include <QPushButton>
#include <QDebug>
#include "mypushbutton.h"
#include <QPropertyAnimation>
#include <QTimer>
#include <QFont>
#include <QPalette>
#include <QGridLayout>
#include <QScrollArea>

Individual::Individual(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Individual)
{
    setMouseTracking(true);
    ui->setupUi(this);
    this->setMinimumSize(1028, 605);
    this->setMaximumSize(1671, 849);
    this->resize(1028, 605);

    QTimer * timer = new QTimer(this);
    timer->start(2000);
    connect(timer, &QTimer::timeout, [=](){
        if(i >= 8)
            i = i - 8;
        i++;
        buttonClicked();
    });

    MyPictrue(":/main_scene/picture1.png", ui->picture1);
    MyPictrue(":/main_scene/picture2.png", ui->picture2);
    MyPictrue(":/main_scene/picture3.png", ui->picture3);
    MyPictrue(":/main_scene/picture4.png", ui->picture4);
    MyPictrue(":/main_scene/picture5.png", ui->picture5);
    MyPictrue(":/main_scene/picture6.png", ui->picture6);
    MyPictrue(":/main_scene/picture7.png", ui->picture7);
    MyPictrue(":/main_scene/picture8.png", ui->picture8);
    MyPictrue(":/main_scene/redpoint.png", ui->point1);
    MyPictrue(":/main_scene/point.png", ui->point2);
    MyPictrue(":/main_scene/point.png", ui->point3);
    MyPictrue(":/main_scene/point.png", ui->point4);
    MyPictrue(":/main_scene/point.png", ui->point5);
    MyPictrue(":/main_scene/point.png", ui->point6);
    MyPictrue(":/main_scene/point.png", ui->point7);
    MyPictrue(":/main_scene/point.png", ui->point8);

    QFont font;
    font.setFamily("黑体");
    font.setPointSize(15);
    ui->songlist->setFont(font);

    font1.setFamily("黑体");
    font1.setPointSize(10);
    settext(ui->text1, "每日歌曲推荐");
    settext(ui->text2, "今天从《愛にできることはまだあるかい》听起|私人雷达");
    settext(ui->text3, "高考励志｜努力学习 岁月不负有心人");
    settext(ui->text4, "『国摇』一百支乐队一百种精神信仰");
    settext(ui->text5, "你总要一个人，经历些难捱的日子。");
    settext(ui->text6, "好听的翻唱Cover集");
    settext(ui->text7, "[日系私人订制] 最懂你的日系推荐 每日更新35首");
    settext(ui->text8, "如果你想听民谣，可以从这些歌曲开始。");
    settext(ui->text9, "你需要一首BGM，来撑起你的内心戏！");
    settext(ui->text10, "中国新声代第三季");
}

Individual::~Individual()
{
    delete ui;
}

void Individual::resizeEvent(QResizeEvent *event)
{
    int currentW = this->size().width(); // 用以记录当前窗体宽度
    int currentH = this->size().height(); // 用以记录当前窗体高度
    if(currentW == 1028){
        ui->songlist->move(40, 325);
        ui->scrollArea->resize(965, 240);
        ui->scrollArea->move(40, 360);
        ui->songlist1->setPixmap(QPixmap(":/main_scene/songlist_1.png"));
        ui->songlist2->setPixmap(QPixmap(":/main_scene/songlist_2.png"));
        ui->songlist3->setPixmap(QPixmap(":/main_scene/songlist_3.png"));
        ui->songlist4->setPixmap(QPixmap(":/main_scene/songlist_4.png"));
        ui->songlist5->setPixmap(QPixmap(":/main_scene/songlist_5.png"));
        ui->songlist6->setPixmap(QPixmap(":/main_scene/songlist_6.png"));
        ui->songlist7->setPixmap(QPixmap(":/main_scene/songlist_7.png"));
        ui->songlist8->setPixmap(QPixmap(":/main_scene/songlist_8.png"));
        ui->songlist9->setPixmap(QPixmap(":/main_scene/songlist_9.png"));
        ui->songlist10->setPixmap(QPixmap(":/main_scene/songlist_10.png"));
    }
    else{
        ui->songlist->move(145, 325);
        ui->scrollArea->resize(1386, 600);
        ui->scrollArea->move(145, 360);
        ui->songlist1->showMaximized();
        ui->songlist1->setPixmap(QPixmap(":/main_scene/Songlist1.png"));
        ui->songlist2->setPixmap(QPixmap(":/main_scene/Songlist2.png"));
        ui->songlist3->setPixmap(QPixmap(":/main_scene/Songlist3.png"));
        ui->songlist4->setPixmap(QPixmap(":/main_scene/Songlist4.png"));
        ui->songlist5->setPixmap(QPixmap(":/main_scene/Songlist5.png"));
        ui->songlist6->setPixmap(QPixmap(":/main_scene/Songlist6.png"));
        ui->songlist7->setPixmap(QPixmap(":/main_scene/Songlist7.png"));
        ui->songlist8->setPixmap(QPixmap(":/main_scene/Songlist8.png"));
        ui->songlist9->setPixmap(QPixmap(":/main_scene/Songlist9.png"));
        ui->songlist10->setPixmap(QPixmap(":/main_scene/Songlist10.png"));
    }
    if(i == 1){
        ui->picture1->setGeometry((currentW - QPixmap(":/main_scene/picture1.png").width()) / 2, 23, QPixmap(":/main_scene/picture1.png").width(), QPixmap(":/main_scene/picture1.png").height());
        if(currentW == 1028){
            ui->picture8->setGeometry(40, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture2->setGeometry(988 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(437, 288);
        }
        else{
            ui->picture8->setGeometry(150, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture2->setGeometry(1522 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(759, 288);
        }
    }
    else if(i == 2){
        ui->picture2->setGeometry((currentW - QPixmap(":/main_scene/picture2.png").width()) / 2, 23, QPixmap(":/main_scene/picture2.png").width(), QPixmap(":/main_scene/picture2.png").height());
        if(currentW == 1028){
            ui->picture1->setGeometry(40, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture3->setGeometry(988 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(437, 288);
        }
        else{
            ui->picture1->setGeometry(150, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture3->setGeometry(1522 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(759, 288);
        }
    }
    else if(i == 3){
        ui->picture3->setGeometry((currentW - QPixmap(":/main_scene/picture3.png").width()) / 2, 23, QPixmap(":/main_scene/picture3.png").width(), QPixmap(":/main_scene/picture3.png").height());
        if(currentW == 1028){
            ui->picture2->setGeometry(40, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture4->setGeometry(988 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(437, 288);
        }
        else{
            ui->picture2->setGeometry(150, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture4->setGeometry(1522 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(759, 288);
        }
    }
    else if(i == 4){
        ui->picture4->setGeometry((currentW - QPixmap(":/main_scene/picture4.png").width()) / 2, 23, QPixmap(":/main_scene/picture4.png").width(), QPixmap(":/main_scene/picture4.png").height());
        if(currentW == 1028){
            ui->picture3->setGeometry(40, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture5->setGeometry(988 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(437, 288);
        }
        else{
            ui->picture3->setGeometry(150, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture5->setGeometry(1522 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(759, 288);
        }
    }
    else if(i == 5){
        ui->picture5->setGeometry((currentW - QPixmap(":/main_scene/picture5.png").width()) / 2, 23, QPixmap(":/main_scene/picture5.png").width(), QPixmap(":/main_scene/picture5.png").height());
        if(currentW == 1028){
            ui->picture4->setGeometry(40, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture6->setGeometry(988 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(437, 288);
        }
        else{
            ui->picture4->setGeometry(150, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture6->setGeometry(1522 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(759, 288);
        }
    }
    else if(i == 6){
        ui->picture6->setGeometry((currentW - QPixmap(":/main_scene/picture6.png").width()) / 2, 23, QPixmap(":/main_scene/picture6.png").width(), QPixmap(":/main_scene/picture6.png").height());
        if(currentW == 1028){
            ui->picture5->setGeometry(40, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture7->setGeometry(988 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(437, 288);
        }
        else{
            ui->picture5->setGeometry(150, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture7->setGeometry(1522 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(759, 288);
        }
    }
    else if(i == 7){
        ui->picture7->setGeometry((currentW - QPixmap(":/main_scene/picture7.png").width()) / 2, 23, QPixmap(":/main_scene/picture7.png").width(), QPixmap(":/main_scene/picture7.png").height());
        if(currentW == 1028){
            ui->picture6->setGeometry(40, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture8->setGeometry(988 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(437, 288);
        }
        else{
            ui->picture6->setGeometry(150, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture8->setGeometry(1522 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(759, 288);
        }
    }
    else if(i == 8){
        ui->picture8->setGeometry((currentW - QPixmap(":/main_scene/picture8.png").width()) / 2, 23, QPixmap(":/main_scene/picture8.png").width(), QPixmap(":/main_scene/picture8.png").height());
        if(currentW == 1028){
            ui->picture7->setGeometry(40, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture1->setGeometry(988 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(437, 288);
        }
        else{
            ui->picture7->setGeometry(150, 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->picture1->setGeometry(1522 - ui->picture8->minimumWidth(), 46, ui->picture8->minimumWidth(), ui->picture8->minimumHeight());
            ui->widget->move(759, 288);
        }
    }
    if(ui->picture1->width() == 677) ui->picture1->setGeometry((currentW - QPixmap(":/main_scene/picture1.png").width()) / 2, 23, QPixmap(":/main_scene/picture1.png").width(), QPixmap(":/main_scene/picture1.png").height());
    if(ui->picture2->width() == 677) ui->picture2->setGeometry((currentW - QPixmap(":/main_scene/picture2.png").width()) / 2, 23, QPixmap(":/main_scene/picture2.png").width(), QPixmap(":/main_scene/picture2.png").height());
    if(ui->picture3->width() == 677) ui->picture3->setGeometry((currentW - QPixmap(":/main_scene/picture3.png").width()) / 2, 23, QPixmap(":/main_scene/picture3.png").width(), QPixmap(":/main_scene/picture3.png").height());
    if(ui->picture4->width() == 677) ui->picture4->setGeometry((currentW - QPixmap(":/main_scene/picture4.png").width()) / 2, 23, QPixmap(":/main_scene/picture4.png").width(), QPixmap(":/main_scene/picture4.png").height());
    if(ui->picture5->width() == 677) ui->picture5->setGeometry((currentW - QPixmap(":/main_scene/picture5.png").width()) / 2, 23, QPixmap(":/main_scene/picture5.png").width(), QPixmap(":/main_scene/picture5.png").height());
    if(ui->picture6->width() == 677) ui->picture6->setGeometry((currentW - QPixmap(":/main_scene/picture6.png").width()) / 2, 23, QPixmap(":/main_scene/picture6.png").width(), QPixmap(":/main_scene/picture6.png").height());
    if(ui->picture7->width() == 677) ui->picture7->setGeometry((currentW - QPixmap(":/main_scene/picture7.png").width()) / 2, 23, QPixmap(":/main_scene/picture7.png").width(), QPixmap(":/main_scene/picture7.png").height());
    if(ui->picture8->width() == 677) ui->picture8->setGeometry((currentW - QPixmap(":/main_scene/picture8.png").width()) / 2, 23, QPixmap(":/main_scene/picture8.png").width(), QPixmap(":/main_scene/picture8.png").height());


}

Individual::MyPictrue(QString pictureImg, QLabel *label)
{
    Label = label;
    pictureImgPath = pictureImg;
    Label->setPixmap(QPixmap(pictureImgPath));
    Label->setAttribute(Qt::WA_Hover,true);
    Label->installEventFilter(this);
}

bool Individual::eventFilter(QObject * obj, QEvent *event)
{
    if(obj == ui->point1){
        if(event->type() == QEvent::HoverEnter) {
            i = 1;
            buttonClicked();
            return true;
        }
    }
    else if(obj == ui->point2){
        if(event->type() == QEvent::HoverEnter) {
            i = 2;
            buttonClicked();
            return true;
        }
    }
    else if(obj == ui->point3){
        if(event->type() == QEvent::HoverEnter) {
            i = 3;
            buttonClicked();
            return true;
        }
    }
    else if(obj == ui->point4){
        if(event->type() == QEvent::HoverEnter) {
            i = 4;
            buttonClicked();
            return true;
        }
    }
    else if(obj == ui->point5){
        if(event->type() == QEvent::HoverEnter) {
            i = 5;
            buttonClicked();
            return true;
        }
    }
    else if(obj == ui->point6){
        if(event->type() == QEvent::HoverEnter) {
            i = 6;
            buttonClicked();
            return true;
        }
    }
    else if(obj == ui->point7){
        if(event->type() == QEvent::HoverEnter) {
            i = 7;
            buttonClicked();
            return true;
        }
    }
    else if(obj == ui->point8){
        if(event->type() == QEvent::HoverEnter) {
            i = 8;
            buttonClicked();
            return true;
        }
    }
    return QWidget::eventFilter(obj,event);
}

void Individual::buttonClicked()
{
    if(i == 1){
        ui->point1->setPixmap(QPixmap(":/main_scene/redpoint.png"));
        if(j == 2){
            changePictuer1(ui->picture2, ui->picture1, ui->picture4, ui->picture8, ui->picture3, ":/main_scene/picture2.png", ":/main_scene/picture1.png", ":/main_scene/picture4.png", ":/main_scene/picture8.png", ":/main_scene/picture3.png");
            j = 1;
        }
        else if(j == 8) changePictuer2(ui->picture8, ui->picture7, ui->picture2, ui->picture1, ui->picture6, ":/main_scene/picture8.png", ":/main_scene/picture7.png", ":/main_scene/picture2.png", ":/main_scene/picture1.png", ":/main_scene/picture6.png");
        else changePictuer3(ui->picture1, ui->picture8, ui->picture2, ui->picture7, ui->picture3, ui->picture4, ui->picture5, ui->picture6, ":/main_scene/picture1.png", ":/main_scene/picture8.png", ":/main_scene/picture2.png", ":/main_scene/picture7.png", ":/main_scene/picture3.png", ":/main_scene/picture4.png", ":/main_scene/picture5.png", ":/main_scene/picture6.png");
        j = 1;
    }
    else ui->point1->setPixmap(QPixmap(":/main_scene/point.png"));
    if(i == 2){
        ui->point2->setPixmap(QPixmap(":/main_scene/redpoint.png"));
        if(j == 3) changePictuer1(ui->picture3, ui->picture2, ui->picture5, ui->picture1, ui->picture4, ":/main_scene/picture3.png", ":/main_scene/picture2.png", ":/main_scene/picture5.png", ":/main_scene/picture1.png", ":/main_scene/picture4.png");
        else if(j == 1) changePictuer2(ui->picture1, ui->picture8, ui->picture3, ui->picture2, ui->picture7, ":/main_scene/picture1.png", ":/main_scene/picture8.png", ":/main_scene/picture3.png", ":/main_scene/picture2.png", ":/main_scene/picture7.png");
        else changePictuer3(ui->picture2, ui->picture1, ui->picture3, ui->picture7, ui->picture8, ui->picture4, ui->picture5, ui->picture6, ":/main_scene/picture2.png", ":/main_scene/picture1.png", ":/main_scene/picture3.png", ":/main_scene/picture7.png", ":/main_scene/picture8.png", ":/main_scene/picture4.png", ":/main_scene/picture5.png", ":/main_scene/picture6.png");
        j = 2;
    }
    else ui->point2->setPixmap(QPixmap(":/main_scene/point.png"));
    if(i == 3){
        ui->point3->setPixmap(QPixmap(":/main_scene/redpoint.png"));
        if(j == 4) changePictuer1(ui->picture4, ui->picture3, ui->picture6, ui->picture2, ui->picture5, ":/main_scene/picture4.png", ":/main_scene/picture3.png", ":/main_scene/picture6.png", ":/main_scene/picture2.png", ":/main_scene/picture5.png");
        else if(j == 2) changePictuer2(ui->picture2, ui->picture1, ui->picture4, ui->picture3, ui->picture8, ":/main_scene/picture2.png", ":/main_scene/picture1.png", ":/main_scene/picture4.png", ":/main_scene/picture3.png", ":/main_scene/picture8.png");
        else changePictuer3(ui->picture3, ui->picture2, ui->picture4, ui->picture1, ui->picture7, ui->picture8, ui->picture5, ui->picture6, ":/main_scene/picture3.png", ":/main_scene/picture2.png", ":/main_scene/picture4.png", ":/main_scene/picture1.png", ":/main_scene/picture7.png", ":/main_scene/picture8.png", ":/main_scene/picture5.png", ":/main_scene/picture6.png");
        j = 3;
    }
    else ui->point3->setPixmap(QPixmap(":/main_scene/point.png"));
    if(i == 4){
        ui->point4->setPixmap(QPixmap(":/main_scene/redpoint.png"));
        if(j == 5) changePictuer1(ui->picture5, ui->picture4, ui->picture7, ui->picture3, ui->picture6, ":/main_scene/picture5.png", ":/main_scene/picture4.png", ":/main_scene/picture7.png", ":/main_scene/picture3.png", ":/main_scene/picture6.png");
        else if(j == 3) changePictuer2(ui->picture3, ui->picture2, ui->picture5, ui->picture4, ui->picture1, ":/main_scene/picture3.png", ":/main_scene/picture2.png", ":/main_scene/picture5.png", ":/main_scene/picture4.png", ":/main_scene/picture1.png");
        else changePictuer3(ui->picture4, ui->picture3, ui->picture5, ui->picture2, ui->picture1, ui->picture7, ui->picture8, ui->picture6, ":/main_scene/picture4.png", ":/main_scene/picture3.png", ":/main_scene/picture5.png", ":/main_scene/picture2.png", ":/main_scene/picture1.png", ":/main_scene/picture7.png", ":/main_scene/picture8.png", ":/main_scene/picture6.png");
        j = 4;
    }
    else ui->point4->setPixmap(QPixmap(":/main_scene/point.png"));
    if(i == 5){
        ui->point5->setPixmap(QPixmap(":/main_scene/redpoint.png"));
        if(j == 6) changePictuer1(ui->picture6, ui->picture5, ui->picture8, ui->picture4, ui->picture7, ":/main_scene/picture6.png", ":/main_scene/picture5.png", ":/main_scene/picture8.png", ":/main_scene/picture4.png", ":/main_scene/picture7.png");
        else if(j == 4) changePictuer2(ui->picture4, ui->picture3, ui->picture6, ui->picture5, ui->picture2, ":/main_scene/picture4.png", ":/main_scene/picture3.png", ":/main_scene/picture6.png", ":/main_scene/picture5.png", ":/main_scene/picture2.png");
        else changePictuer3(ui->picture5, ui->picture4, ui->picture6, ui->picture2, ui->picture3, ui->picture1, ui->picture7, ui->picture8, ":/main_scene/picture5.png", ":/main_scene/picture4.png", ":/main_scene/picture6.png", ":/main_scene/picture2.png", ":/main_scene/picture3.png", ":/main_scene/picture1.png", ":/main_scene/picture7.png", ":/main_scene/picture8.png");
        j = 5;
    }
    else ui->point5->setPixmap(QPixmap(":/main_scene/point.png"));
    if(i == 6){
        ui->point6->setPixmap(QPixmap(":/main_scene/redpoint.png"));
        if(j == 7) changePictuer1(ui->picture7, ui->picture6, ui->picture1, ui->picture5, ui->picture8, ":/main_scene/picture7.png", ":/main_scene/picture6.png", ":/main_scene/picture1.png", ":/main_scene/picture5.png", ":/main_scene/picture8.png");
        else if(j == 5) changePictuer2(ui->picture5, ui->picture4, ui->picture7, ui->picture6, ui->picture3, ":/main_scene/picture5.png", ":/main_scene/picture4.png", ":/main_scene/picture7.png", ":/main_scene/picture6.png", ":/main_scene/picture3.png");
        else changePictuer3(ui->picture6, ui->picture5, ui->picture7, ui->picture2, ui->picture3, ui->picture4, ui->picture1, ui->picture8, ":/main_scene/picture6.png", ":/main_scene/picture5.png", ":/main_scene/picture7.png", ":/main_scene/picture2.png", ":/main_scene/picture3.png", ":/main_scene/picture4.png", ":/main_scene/picture1.png", ":/main_scene/picture8.png");
        j = 6;
    }
    else ui->point6->setPixmap(QPixmap(":/main_scene/point.png"));
    if(i == 7){
        ui->point7->setPixmap(QPixmap(":/main_scene/redpoint.png"));
        if(j == 8) changePictuer1(ui->picture8, ui->picture7, ui->picture2, ui->picture6, ui->picture1, ":/main_scene/picture8.png", ":/main_scene/picture7.png", ":/main_scene/picture2.png", ":/main_scene/picture6.png", ":/main_scene/picture1.png");
        else if(j == 6) changePictuer2(ui->picture6, ui->picture5, ui->picture8, ui->picture7, ui->picture4, ":/main_scene/picture6.png", ":/main_scene/picture5.png", ":/main_scene/picture8.png", ":/main_scene/picture7.png", ":/main_scene/picture4.png");
        else changePictuer3(ui->picture7, ui->picture6, ui->picture8, ui->picture2, ui->picture3, ui->picture4, ui->picture5, ui->picture1, ":/main_scene/picture7.png", ":/main_scene/picture6.png", ":/main_scene/picture8.png", ":/main_scene/picture2.png", ":/main_scene/picture3.png", ":/main_scene/picture4.png", ":/main_scene/picture5.png", ":/main_scene/picture1.png");
        j = 7;
    }
    else ui->point7->setPixmap(QPixmap(":/main_scene/point.png"));
    if(i == 8){
        ui->point8->setPixmap(QPixmap(":/main_scene/redpoint.png"));
        if(j == 1) changePictuer1(ui->picture1, ui->picture8, ui->picture3, ui->picture7, ui->picture2, ":/main_scene/picture1.png", ":/main_scene/picture8.png", ":/main_scene/picture3.png", ":/main_scene/picture7.png", ":/main_scene/picture2.png");
        else if(j == 7) changePictuer2(ui->picture7, ui->picture6, ui->picture1, ui->picture8, ui->picture5, ":/main_scene/picture7.png", ":/main_scene/picture6.png", ":/main_scene/picture1.png", ":/main_scene/picture8.png", ":/main_scene/picture5.png");
        else changePictuer3(ui->picture8, ui->picture7, ui->picture1, ui->picture2, ui->picture3, ui->picture4, ui->picture5, ui->picture6, ":/main_scene/picture8.png", ":/main_scene/picture7.png", ":/main_scene/picture1.png", ":/main_scene/picture2.png", ":/main_scene/picture3.png", ":/main_scene/picture4.png", ":/main_scene/picture5.png", ":/main_scene/picture6.png");
        j = 8;
    }
    else ui->point8->setPixmap(QPixmap(":/main_scene/point.png"));
}

void Individual::changePictuer1(QLabel * lab1, QLabel * lab2, QLabel * lab3, QLabel * lab4, QLabel * lab5, QString imgPicture1, QString imgPicture2, QString imgPicture3, QString imgPicture4, QString imgPicture5)
{
    //创建动画对象
    QPropertyAnimation * animation1 = new QPropertyAnimation(lab1, "geometry");
    QPropertyAnimation * animation2 = new QPropertyAnimation(lab2, "geometry");
    QPropertyAnimation * animation4 = new QPropertyAnimation(lab4, "geometry");
    QPropertyAnimation * animation5 = new QPropertyAnimation(lab5, "geometry");

    //设置动画时间间隔
    animation1->setDuration(100);
    animation2->setDuration(100);
    animation4->setDuration(100);
    animation5->setDuration(100);

    //起始位置
    animation1->setStartValue(QRect(lab1->x(), lab1->y(), lab1->width(), lab1->height()));
    animation2->setStartValue(QRect(lab2->x(), lab2->y(), lab2->width(), lab2->height()));
    animation4->setStartValue(QRect(lab4->x(), lab4->y(), lab4->width(), lab4->height()));
    animation5->setStartValue(QRect(lab5->x(), lab5->y(), lab5->width(), lab5->height()));

    //结束位置
    pix.load(imgPicture1);
    pix = pix.scaled(557, 204);
    lab1->setPixmap(pix);
    if(this->width() == 1028)
        animation1->setEndValue(QRect(436, 46, 557, 204));
    else
        animation1->setEndValue(QRect(965, 46, 557, 204));
    lab1->raise();

    pix.load(imgPicture4);
    pix = pix.scaled(557, 204);
    lab4->setPixmap(pix);
    if(this->width() == 1028)
        animation4->setEndValue(QRect(41, 46, 557, 204));
    else
        animation4->setEndValue(QRect(151, 46, 557, 204));
    lab4->raise();

    pix.load(imgPicture2);
    pix = pix.scaled(pix.width(), pix.height());
    lab2->setPixmap(pix);
    if(this->width() == 1028)
        animation2->setEndValue(QRect(178, 23, 677, 248));
    else
        animation2->setEndValue(QRect(500, 23, 677, 248));
    lab2->raise();

    pix.load(imgPicture3);
    lab3->resize(677, 248);
    lab3->setPixmap(pix);
    if(this->width() == 1028)
        lab3->move(178, 23);
    else
        lab3->move(500, 23);

    pix.load(imgPicture5);
    pix = pix.scaled(pix.width(), pix.height());
    lab5->setPixmap(pix);
    if(this->width() == 1028)
        animation5->setEndValue(QRect(178, 23, 677, 248));
    else
        animation5->setEndValue(QRect(500, 23, 677, 248));

    //设置弹跳曲线
    animation1->setEasingCurve(QEasingCurve::Linear);
    animation2->setEasingCurve(QEasingCurve::Linear);
    animation4->setEasingCurve(QEasingCurve::Linear);
    animation5->setEasingCurve(QEasingCurve::Linear);

    //执行动画
    animation1->start();
    animation2->start();
    animation4->start();
    animation5->start();
}

void Individual::changePictuer2(QLabel * lab1, QLabel * lab2, QLabel * lab3, QLabel * lab4, QLabel * lab5, QString imgPicture1, QString imgPicture2, QString imgPicture3, QString imgPicture4, QString imgPicture5)
{
    //创建动画对象
    QPropertyAnimation * animation1 = new QPropertyAnimation(lab1, "geometry");
    QPropertyAnimation * animation2 = new QPropertyAnimation(lab2, "geometry");
    QPropertyAnimation * animation3 = new QPropertyAnimation(lab3, "geometry");
    QPropertyAnimation * animation4 = new QPropertyAnimation(lab4, "geometry");

    //设置动画时间间隔
    animation1->setDuration(100);
    animation2->setDuration(100);
    animation3->setDuration(100);
    animation4->setDuration(100);

    //起始位置
    animation1->setStartValue(QRect(lab1->x(), lab1->y(), lab1->width(), lab1->height()));
    animation2->setStartValue(QRect(lab2->x(), lab2->y(), lab2->width(), lab2->height()));
    animation3->setStartValue(QRect(lab3->x(), lab3->y(), lab3->width(), lab3->height()));
    animation4->setStartValue(QRect(lab4->x(), lab4->y(), lab4->width(), lab4->height()));

    //结束位置
    pix.load(imgPicture1);
    pix = pix.scaled(557, 204);
    lab1->setPixmap(pix);
    if(this->width() == 1028)
        animation1->setEndValue(QRect(41, 46, 557, 204));
    else
        animation1->setEndValue(QRect(151, 46, 557, 204));
    lab1->raise();

    pix.load(imgPicture3);
    pix = pix.scaled(557, 204);
    lab3->setPixmap(pix);
    if(this->width() == 1028)
        animation3->setEndValue(QRect(436, 46, 557, 204));
    else
        animation3->setEndValue(QRect(965, 46, 557, 204));
    lab3->raise();

    pix.load(imgPicture2);
    pix = pix.scaled(pix.width(), pix.height());
    lab2->setPixmap(pix);
    if(this->width() == 1028)
        animation2->setEndValue(QRect(178, 23, 677, 248));
    else
        animation2->setEndValue(QRect(500, 23, 677, 248));

    pix.load(imgPicture4);
    pix = pix.scaled(pix.width(), pix.height());
    lab4->setPixmap(pix);
    if(this->width() == 1028)
        animation4->setEndValue(QRect(178, 23, 677, 248));
    else
        animation4->setEndValue(QRect(500, 23, 677, 248));
    lab4->raise();

    pix.load(imgPicture5);
    lab5->resize(677, 248);
    lab5->setPixmap(pix);
    if(this->width() == 1028)
        lab5->move(178, 23);
    else
        lab4->move(500, 23);

    //设置弹跳曲线
    animation1->setEasingCurve(QEasingCurve::Linear);
    animation2->setEasingCurve(QEasingCurve::Linear);
    animation3->setEasingCurve(QEasingCurve::Linear);
    animation4->setEasingCurve(QEasingCurve::Linear);

    //执行动画
    animation1->start();
    animation2->start();
    animation3->start();
    animation4->start();
}

void Individual::changePictuer3(QLabel * lab1,  QLabel * lab2, QLabel * lab3, QLabel * lab4, QLabel * lab5,  QLabel * lab6, QLabel * lab7, QLabel * lab8, QString imgPicture1, QString imgPicture2, QString imgPicture3, QString imgPicture4, QString imgPicture5, QString imgPicture6, QString imgPicture7, QString imgPicture8)
{
    //创建动画对象
    QPropertyAnimation * animation1 = new QPropertyAnimation(lab1, "geometry");
    QPropertyAnimation * animation2 = new QPropertyAnimation(lab2, "geometry");
    QPropertyAnimation * animation3 = new QPropertyAnimation(lab3, "geometry");

    //设置动画时间间隔
    animation1->setDuration(100);
    animation2->setDuration(100);
    animation3->setDuration(100);

    //起始位置
    animation1->setStartValue(QRect(lab1->x(), lab1->y(), lab1->width(), lab1->height()));
    animation2->setStartValue(QRect(lab2->x(), lab2->y(), lab2->width(), lab2->height()));
    animation3->setStartValue(QRect(lab3->x(), lab3->y(), lab3->width(), lab3->height()));

    //结束位置
    if(this->width() == 1028){
        animation1->setEndValue(QRect(178, 23, 677, 248));
        animation2->setEndValue(QRect(41, 46, 557, 204));
        animation3->setEndValue(QRect(436, 46, 557, 204));
        lab4->setGeometry(QRect(178, 23, 677, 248));
        lab5->setGeometry(QRect(178, 23, 677, 248));
        lab6->setGeometry(QRect(178, 23, 677, 248));
        lab7->setGeometry(QRect(178, 23, 677, 248));
        lab8->setGeometry(QRect(178, 23, 677, 248));
    }
    else{
        animation1->setEndValue(QRect(500, 23, 677, 248));
        animation2->setEndValue(QRect(151, 46, 557, 204));
        animation3->setEndValue(QRect(965, 46, 557, 204));
        lab4->setGeometry(QRect(500, 23, 677, 248));
        lab5->setGeometry(QRect(500, 23, 677, 248));
        lab6->setGeometry(QRect(500, 23, 677, 248));
        lab7->setGeometry(QRect(500, 23, 677, 248));
        lab8->setGeometry(QRect(500, 23, 677, 248));
    }
    lab2->raise();
    lab3->raise();
    lab1->raise();

    //设置弹跳曲线
    animation1->setEasingCurve(QEasingCurve::Linear);
    animation2->setEasingCurve(QEasingCurve::Linear);
    animation3->setEasingCurve(QEasingCurve::Linear);

    //执行动画
    animation1->start();
    animation2->start();
    animation3->start();
}

void Individual::settext(QLabel *lab, QString str)
{
    lab->setFont(font1);
    lab->setWordWrap(true);
    lab->setText(str);
    lab->setAlignment(Qt::AlignLeft);
    lab->setAlignment(Qt::AlignTop);
}

