#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "menubar.h"
#include "mainscene.h"
#include <QString>
#include <QLabel>
#include <QFont>
#include <QSlider>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QMediaPlaylist>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void resizeEvent(QResizeEvent *event);
    void settext(QLabel * lab, QString str);
    void on_horizontalSlider_valueChanged();

    MenuBar * menuBar = NULL;
    MainScene *mainScene = NULL;
    QPoint whereismouse;
    Individual * individual = NULL;
    QFont font;
    int v = 0;
    int m = 0;
    int p = 0;
    int r = 0;
    int c = 0;

private:
    Ui::Widget *ui;
    QMediaPlayer * player;
    QMediaPlaylist * playlist;
    QString durationTime;
    QString positionTime;

private slots:
    void onDurationChanged(qint64 duration); //文件时长变化，更新当前播放文件名显示
    //播放文件数据总大小的信号， 它可以获得文件时间长度。
    void onPositionChanged(qint64 position); //当前文件播放位置变化，更新进度显示
    //播放到什么位置的信号， 参数是以毫秒来计算的
    void on_voiceChange_valueChanged(int value);
};

#endif // WIDGET_H
