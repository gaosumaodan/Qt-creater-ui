#include "mainscene.h"
#include "ui_mainscene.h"
#include "mypushbutton.h"

MainScene::MainScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainScene)
{
    this->setFixedSize(1671, 914);
    static int i = 1;
    ui->setupUi(this);
    MyPushButton(":/main_scene/individual_clicked.png", ui->individual1, ui->individual);
    MyPushButton(":/main_scene/exclusive.png", ui->exclusive1, ui->exclusive);
    MyPushButton(":/main_scene/songlist.png", ui->songlist1, ui->songlist);
    MyPushButton(":/main_scene/ranking.png", ui->ranking1, ui->ranking);
    MyPushButton(":/main_scene/singer.png", ui->singer1, ui->singer);
    MyPushButton(":/main_scene/latest.png", ui->latest1, ui->latest);
    connect(ui->individual, &QPushButton::clicked, [=] (){
        i = 1;
        buttonClicked(ui, i);
    });
    connect(ui->exclusive, &QPushButton::clicked, [=] (){
        i = 2;
        buttonClicked(ui, i);
    });
    connect(ui->songlist, &QPushButton::clicked, [=] (){
        i = 3;
        buttonClicked(ui, i);
    });
    connect(ui->ranking, &QPushButton::clicked, [=] (){
        i = 4;
        buttonClicked(ui, i);
    });
    connect(ui->singer, &QPushButton::clicked, [=] (){
        i = 5;
        buttonClicked(ui, i);
    });
    connect(ui->latest, &QPushButton::clicked, [=] (){
        i = 6;
        buttonClicked(ui, i);
    });
}

MainScene::~MainScene()
{
    delete ui;
}

void MainScene::buttonClicked(Ui::MainScene *ui, int i)
{
    if(i == 1) ui->individual1->setPixmap(QPixmap(":/main_scene/individual_clicked.png"));
    else{
        ui->individual1->setPixmap(QPixmap(":/main_scene/individual.png"));
    }
    if(i == 2) ui->exclusive1->setPixmap(QPixmap(":/main_scene/exclusive_clicked.png"));
    else{
        ui->exclusive1->setPixmap(QPixmap(":/main_scene/exclusive.png"));
    }
    if(i == 3) ui->songlist1->setPixmap(QPixmap(":/main_scene/songlist_clicked.png"));
    else{
        ui->songlist1->setPixmap(QPixmap(":/main_scene/songlist.png"));
    }
    if(i == 4) ui->ranking1->setPixmap(QPixmap(":/main_scene/ranking_clicked.png"));
    else{
        ui->ranking1->setPixmap(QPixmap(":/main_scene/ranking.png"));
    }
    if(i == 5) ui->singer1->setPixmap(QPixmap(":/main_scene/singer_clicked.png"));
    else{
        ui->singer1->setPixmap(QPixmap(":/main_scene/singer.png"));
    }
    if(i == 6) ui->latest1->setPixmap(QPixmap(":/main_scene/latest_clicked.png"));
    else{
        ui->latest1->setPixmap(QPixmap(":/main_scene/latest.png"));
    }
}
