#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <QWidget>
#include <QLabel>
#include <QFrame>
#include <QPushButton>
#include <QEvent>
#include <QFont>

namespace Ui {
class Individual;
}

class Individual : public QFrame
{
    Q_OBJECT

public:
    explicit Individual(QWidget *parent = 0);
    ~Individual();

    void resizeEvent(QResizeEvent *event);
    bool eventFilter(QObject *obj, QEvent *event);
    void buttonClicked();
    void changePictuer1(QLabel * lab1, QLabel * lab2, QLabel * lab3, QLabel * lab4, QLabel * lab5, QString imgPicture1, QString imgPicture2, QString imgPicture3, QString imgPicture4, QString imgPicture5);
    void changePictuer2(QLabel * lab1,  QLabel * lab2, QLabel * lab3, QLabel * lab4, QLabel * lab5, QString imgPicture1, QString imgPicture2, QString imgPicture3, QString imgPicture4, QString imgPicture5);
    void changePictuer3(QLabel * lab1,  QLabel * lab2, QLabel * lab3, QLabel * lab4, QLabel * lab5,  QLabel * lab6, QLabel * lab7, QLabel * lab8, QString imgPicture1, QString imgPicture2, QString imgPicture3, QString imgPicture4, QString imgPicture5, QString imgPicture6, QString imgPicture7, QString imgPicture8);
    void settext(QLabel * lab, QString str);
    MyPictrue(QString pictureImg, QLabel * label);
    QString pictureImgPath;
    QPushButton * Btn;
    QLabel * Label;
    QPixmap pix;
    int i = 1;
    int j = 1;
    int k = 1;
    QFont font1;

private:
    Ui::Individual *ui;
};

#endif // INDIVIDUAL_H
