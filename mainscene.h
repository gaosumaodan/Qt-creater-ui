#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include "individual.h"

namespace Ui {
class MainScene;
}

class MainScene : public QWidget
{
    Q_OBJECT

public:
    explicit MainScene(QWidget *parent = 0);
    ~MainScene();

    void buttonClicked(Ui::MainScene * ui, int i = 1);

    Individual * individual = NULL;

private:
    Ui::MainScene *ui;
};

#endif // MAINSCENE_H
