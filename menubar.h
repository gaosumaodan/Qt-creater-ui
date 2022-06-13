#ifndef MENUBAR_H
#define MENUBAR_H

#include <QWidget>
#include <QPainter>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class MenuBar;
}

class MenuBar : public QWidget
{
    Q_OBJECT

public:
    explicit MenuBar(QWidget *parent = 0);
    ~MenuBar();

    void buttonClicked(int i = 1);
    MenuBar * menubar = NULL;

private:
    Ui::MenuBar *ui;
};

#endif // MENUBAR_H
