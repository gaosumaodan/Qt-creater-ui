#include "menubar.h"
#include "ui_menubar.h"
#include "mypushbutton.h"
#include "expandbutton.h"
#include <QPixmap>
#include <QDebug>

MenuBar::MenuBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuBar)
{
    setWindowFlag(Qt::FramelessWindowHint);
    ui->setupUi(this);
    static QPixmap pix;
    static int i = 1, j = 0;
    pix.load(":/menu_bar/bk.png");
    ui->bk->setFrameStyle(QFrame::NoFrame);
    ui->bk->setPixmap(pix);
    ui->bk->move(0, 0);
    ui->bk->setAttribute(Qt::WA_TransparentForMouseEvents);
    MyPushButton(":/menu_bar/FoundMusic.png", ui->FoundMusic1, ui->FoundMusic);
    pix.load(":/menu_bar/FoundMusic_clicked.png");
    ui->FoundMusic1->setPixmap(QPixmap(pix));
    MyPushButton(":/menu_bar/Podcast.png", ui->Podcast1, ui->Podcast);
    MyPushButton(":/menu_bar/Video.png", ui->Video1, ui->Video);
    MyPushButton(":/menu_bar/Focus.png", ui->Focus1, ui->Focus);
    MyPushButton(":/menu_bar/Live.png", ui->Live1, ui->Live);
    MyPushButton(":/menu_bar/FM.png", ui->FM1, ui->FM);
    pix.load(":/menu_bar/MyMusic.png");
    ui->MyMusic->setPixmap(pix);
    MyPushButton(":/menu_bar/Local.png", ui->Local1, ui->Local);
    MyPushButton(":/menu_bar/Recent.png", ui->Recent1, ui->Recent);
    MyPushButton(":/menu_bar/MyCloudMusic.png", ui->MyCloudMusic1, ui->MyCloudMusic);
    MyPushButton(":/menu_bar/MyPodcast.png", ui->MyPodcast1, ui->MyPodcast);
    MyPushButton(":/menu_bar/MyEnshrine.png", ui->MyEnshrine1, ui->MyEnshrine);
    MyPushButton(":/menu_bar/SongList.png", ui->SongList1, ui->SongList);
    connect(ui->FoundMusic, &QPushButton::clicked, [=] (){
        i = 1;
        buttonClicked(i);
    });
    connect(ui->Podcast, &QPushButton::clicked, [=] (){
        i = 2;
        buttonClicked(i);
    });
    connect(ui->Video, &QPushButton::clicked, [=] (){
        i = 3;
        buttonClicked(i);
    });
    connect(ui->Focus, &QPushButton::clicked, [=] (){
        i = 4;
        buttonClicked(i);
    });
    connect(ui->Live, &QPushButton::clicked, [=] (){
        i = 5;
        buttonClicked(i);
    });
    connect(ui->FM, &QPushButton::clicked, [=] (){
        i = 6;
        buttonClicked(i);
    });
    connect(ui->Local, &QPushButton::clicked, [=] (){
        i = 7;
        buttonClicked(i);
    });
    connect(ui->Recent, &QPushButton::clicked, [=] (){
        i = 8;
        buttonClicked(i);
    });
    connect(ui->MyCloudMusic, &QPushButton::clicked, [=] (){
        i = 9;
        buttonClicked(i);
    });
    connect(ui->MyPodcast, &QPushButton::clicked, [=] (){
        i = 10;
        buttonClicked(i);
    });
    connect(ui->MyEnshrine, &QPushButton::clicked, [=] (){
        i = 11;
        buttonClicked(i);
    });
    connect(ui->SongList, &QPushButton::clicked, [=] (){
        if(j != 1){
            j++;
            ui->SongList1->setPixmap(QPixmap(":/menu_bar/SongList.png"));
        } else{
            j = 0;
            ui->SongList1->setPixmap(QPixmap(":/menu_bar/SongList_clicked.png"));
        }
    });




}

MenuBar::~MenuBar()
{
    delete ui;
}

void MenuBar::buttonClicked(int i)
{
    if(i == 1) ui->FoundMusic1->setPixmap(QPixmap(":/menu_bar/FoundMusic_clicked.png"));
    else{
        ui->FoundMusic1->setPixmap(QPixmap(":/menu_bar/FoundMusic.png"));
    }
    if(i == 2) ui->Podcast1->setPixmap(QPixmap(":/menu_bar/Podcast_clicked.png"));
    else{
        ui->Podcast1->setPixmap(QPixmap(":/menu_bar/Podcast.png"));
    }
    if(i == 3) ui->Video1->setPixmap(QPixmap(":/menu_bar/Video_clicked.png"));
    else{
        ui->Video1->setPixmap(QPixmap(":/menu_bar/Video.png"));
    }
    if(i == 4) ui->Focus1->setPixmap(QPixmap(":/menu_bar/Focus_clicked.png"));
    else{
        ui->Focus1->setPixmap(QPixmap(":/menu_bar/Focus.png"));
    }
    if(i == 5) ui->Live1->setPixmap(QPixmap(":/menu_bar/Live_clicked.png"));
    else{
        ui->Live1->setPixmap(QPixmap(":/menu_bar/Live.png"));
    }
    if(i == 6) ui->FM1->setPixmap(QPixmap(":/menu_bar/FM_clicked.png"));
    else{
        ui->FM1->setPixmap(QPixmap(":/menu_bar/FM.png"));
    }
    if(i == 7) ui->Local1->setPixmap(QPixmap(":/menu_bar/Local_clicked.png"));
    else{
        ui->Local1->setPixmap(QPixmap(":/menu_bar/Local.png"));
    }
    if(i == 8) ui->Recent1->setPixmap(QPixmap(":/menu_bar/Recent_clicked.png"));
    else{
        ui->Recent1->setPixmap(QPixmap(":/menu_bar/Recent.png"));
    }
    if(i == 9) ui->MyCloudMusic1->setPixmap(QPixmap(":/menu_bar/MyCloudMusic_clicked.png"));
    else{
        ui->MyCloudMusic1->setPixmap(QPixmap(":/menu_bar/MyCloudMusic.png"));
    }
    if(i == 10) ui->MyPodcast1->setPixmap(QPixmap(":/menu_bar/MyPodcast_clicked.png"));
    else{
        ui->MyPodcast1->setPixmap(QPixmap(":/menu_bar/MyPodcast.png"));
    }
    if(i == 11) ui->MyEnshrine1->setPixmap(QPixmap(":/menu_bar/MyEnshrine_clicked.png"));
    else{
        ui->MyEnshrine1->setPixmap(QPixmap(":/menu_bar/MyEnshrine.png"));
    }
}
