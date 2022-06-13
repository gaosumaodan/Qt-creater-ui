#include "mypushbutton.h"
#include <QPixmap>
#include <QPainter>
#include <QDebug>

MyPushButton::MyPushButton(QString Img, QLabel * label, QPushButton * pushbutton)
{
    Label = label;
    PushButton = pushbutton;
    ImgPath = Img;
    QPixmap pixmap(ImgPath);
    Label->setPixmap(pixmap);
    //将label置于顶层
    Label->raise();
    //改变鼠标为手型并设置鼠标穿透
    PushButton->setCursor(QCursor(Qt::PointingHandCursor));
    Label->setAttribute(Qt::WA_TransparentForMouseEvents);
}
