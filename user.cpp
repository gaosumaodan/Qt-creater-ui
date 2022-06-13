#include "user.h"
#include "ui_user.h"
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>

User::User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
}

User::~User()
{
    delete ui;
}

void User::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPixmap pixmap(":/img/user.png");
    painter.drawPixmap(this->rect(), pixmap);
}
