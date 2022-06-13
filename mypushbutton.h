#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    MyPushButton(QString Img, QLabel * label, QPushButton * pushbutton);

    QString ImgPath;
    QLabel * Label;
    QPushButton * PushButton;


signals:

public slots:
};

#endif // MYPUSHBUTTON_H
