#include "expandbutton.h"

ExpandButton::ExpandButton(QWidget *parent) : QWidget(parent)
{

}

ExpandButton::ExpandButton(QPushButton *pushbutton, QWidget *widget)
{
    PushButton = pushbutton;
    Widget = widget;
    connect(PushButton, &QPushButton::clicked, [=] () {
        Widget->hide();
    });
}
