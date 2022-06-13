#ifndef EXPANDBUTTON_H
#define EXPANDBUTTON_H

#include <QWidget>
#include <QPushButton>

class ExpandButton : public QWidget
{
    Q_OBJECT
public:
    explicit ExpandButton(QWidget *parent = nullptr);

    ExpandButton(QPushButton * pushbutton, QWidget * widget);

    QPushButton * PushButton;
    QWidget * Widget;

signals:

public slots:
};

#endif // EXPANDBUTTON_H
