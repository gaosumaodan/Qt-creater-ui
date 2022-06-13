/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *tbn_min;
    QPushButton *tbn_max;
    QPushButton *tbn_close;
    QLabel *tbn_close1;
    QLabel *tbn_max1;
    QLabel *tbn_min1;
    QLabel *wyy;
    QPushButton *min;
    QLabel *min1;
    QPushButton *tbn_mail;
    QLabel *tbn_mail1;
    QLabel *separate;
    QLabel *tbn_setting1;
    QPushButton *tbn_clothing;
    QLabel *tbn_clothing1;
    QPushButton *title_user;
    QLabel *title_user1;
    QPushButton *tbn_setting;
    QPushButton *tbn_listening;
    QLabel *tbn_listening1;
    QLabel *title_searching1;
    QPushButton *title_searching;
    QLabel *change_right1;
    QPushButton *change_right;
    QPushButton *change_left;
    QLabel *change_left1;
    QLabel *cd;
    QLabel *pause1;
    QPushButton *pause;
    QLabel *last1;
    QLabel *next1;
    QPushButton *lyric;
    QLabel *lyric1;
    QPushButton *range;
    QLabel *range1;
    QLabel *label;
    QLabel *label_2;
    QLabel *tbn2;
    QLabel *tbn1;
    QLabel *voice1;
    QPushButton *voice;
    QSlider *voiceChange;
    QLabel *voicechange;
    QLabel *starttime;
    QLabel *endtime;
    QSlider *horizontalSlider;
    QPushButton *next;
    QPushButton *last;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1277, 838);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(1277, 838));
        Widget->setMaximumSize(QSize(1920, 1080));
        tbn_min = new QPushButton(Widget);
        tbn_min->setObjectName(QStringLiteral("tbn_min"));
        tbn_min->setGeometry(QRect(1130, 20, 35, 35));
        tbn_max = new QPushButton(Widget);
        tbn_max->setObjectName(QStringLiteral("tbn_max"));
        tbn_max->setGeometry(QRect(1175, 20, 35, 35));
        tbn_close = new QPushButton(Widget);
        tbn_close->setObjectName(QStringLiteral("tbn_close"));
        tbn_close->setGeometry(QRect(1220, 20, 35, 35));
        tbn_close1 = new QLabel(Widget);
        tbn_close1->setObjectName(QStringLiteral("tbn_close1"));
        tbn_close1->setGeometry(QRect(1220, 20, 35, 35));
        tbn_max1 = new QLabel(Widget);
        tbn_max1->setObjectName(QStringLiteral("tbn_max1"));
        tbn_max1->setGeometry(QRect(1175, 20, 35, 35));
        tbn_min1 = new QLabel(Widget);
        tbn_min1->setObjectName(QStringLiteral("tbn_min1"));
        tbn_min1->setGeometry(QRect(1130, 20, 35, 35));
        wyy = new QLabel(Widget);
        wyy->setObjectName(QStringLiteral("wyy"));
        wyy->setGeometry(QRect(0, 0, 220, 75));
        min = new QPushButton(Widget);
        min->setObjectName(QStringLiteral("min"));
        min->setGeometry(QRect(1085, 20, 35, 35));
        min1 = new QLabel(Widget);
        min1->setObjectName(QStringLiteral("min1"));
        min1->setGeometry(QRect(1085, 20, 35, 35));
        tbn_mail = new QPushButton(Widget);
        tbn_mail->setObjectName(QStringLiteral("tbn_mail"));
        tbn_mail->setGeometry(QRect(1025, 20, 35, 35));
        tbn_mail1 = new QLabel(Widget);
        tbn_mail1->setObjectName(QStringLiteral("tbn_mail1"));
        tbn_mail1->setGeometry(QRect(1025, 20, 35, 35));
        separate = new QLabel(Widget);
        separate->setObjectName(QStringLiteral("separate"));
        separate->setGeometry(QRect(1067, 20, 10, 35));
        tbn_setting1 = new QLabel(Widget);
        tbn_setting1->setObjectName(QStringLiteral("tbn_setting1"));
        tbn_setting1->setGeometry(QRect(980, 20, 35, 35));
        tbn_clothing = new QPushButton(Widget);
        tbn_clothing->setObjectName(QStringLiteral("tbn_clothing"));
        tbn_clothing->setGeometry(QRect(935, 20, 35, 35));
        tbn_clothing1 = new QLabel(Widget);
        tbn_clothing1->setObjectName(QStringLiteral("tbn_clothing1"));
        tbn_clothing1->setGeometry(QRect(935, 20, 35, 35));
        title_user = new QPushButton(Widget);
        title_user->setObjectName(QStringLiteral("title_user"));
        title_user->setGeometry(QRect(727, 11, 206, 48));
        title_user1 = new QLabel(Widget);
        title_user1->setObjectName(QStringLiteral("title_user1"));
        title_user1->setGeometry(QRect(727, 12, 206, 48));
        tbn_setting = new QPushButton(Widget);
        tbn_setting->setObjectName(QStringLiteral("tbn_setting"));
        tbn_setting->setGeometry(QRect(980, 20, 35, 35));
        tbn_listening = new QPushButton(Widget);
        tbn_listening->setObjectName(QStringLiteral("tbn_listening"));
        tbn_listening->setGeometry(QRect(580, 18, 40, 40));
        tbn_listening1 = new QLabel(Widget);
        tbn_listening1->setObjectName(QStringLiteral("tbn_listening1"));
        tbn_listening1->setGeometry(QRect(580, 18, 40, 40));
        title_searching1 = new QLabel(Widget);
        title_searching1->setObjectName(QStringLiteral("title_searching1"));
        title_searching1->setGeometry(QRect(373, 18, 201, 40));
        title_searching = new QPushButton(Widget);
        title_searching->setObjectName(QStringLiteral("title_searching"));
        title_searching->setGeometry(QRect(373, 18, 201, 40));
        change_right1 = new QLabel(Widget);
        change_right1->setObjectName(QStringLiteral("change_right1"));
        change_right1->setGeometry(QRect(323, 22, 30, 30));
        change_right = new QPushButton(Widget);
        change_right->setObjectName(QStringLiteral("change_right"));
        change_right->setGeometry(QRect(323, 22, 30, 30));
        change_left = new QPushButton(Widget);
        change_left->setObjectName(QStringLiteral("change_left"));
        change_left->setGeometry(QRect(283, 22, 30, 30));
        change_left1 = new QLabel(Widget);
        change_left1->setObjectName(QStringLiteral("change_left1"));
        change_left1->setGeometry(QRect(283, 22, 30, 30));
        cd = new QLabel(Widget);
        cd->setObjectName(QStringLiteral("cd"));
        cd->setGeometry(QRect(15, 764, 62, 62));
        pause1 = new QLabel(Widget);
        pause1->setObjectName(QStringLiteral("pause1"));
        pause1->setGeometry(QRect(616, 762, 49, 49));
        pause = new QPushButton(Widget);
        pause->setObjectName(QStringLiteral("pause"));
        pause->setGeometry(QRect(616, 762, 49, 49));
        last1 = new QLabel(Widget);
        last1->setObjectName(QStringLiteral("last1"));
        last1->setGeometry(QRect(556, 773, 25, 25));
        next1 = new QLabel(Widget);
        next1->setObjectName(QStringLiteral("next1"));
        next1->setGeometry(QRect(700, 773, 25, 25));
        lyric = new QPushButton(Widget);
        lyric->setObjectName(QStringLiteral("lyric"));
        lyric->setGeometry(QRect(760, 773, 25, 25));
        lyric1 = new QLabel(Widget);
        lyric1->setObjectName(QStringLiteral("lyric1"));
        lyric1->setGeometry(QRect(760, 773, 25, 25));
        range = new QPushButton(Widget);
        range->setObjectName(QStringLiteral("range"));
        range->setGeometry(QRect(496, 773, 25, 25));
        range1 = new QLabel(Widget);
        range1->setObjectName(QStringLiteral("range1"));
        range1->setGeometry(QRect(496, 773, 25, 25));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 760, 151, 21));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 790, 72, 15));
        tbn2 = new QLabel(Widget);
        tbn2->setObjectName(QStringLiteral("tbn2"));
        tbn2->setGeometry(QRect(1181, 770, 91, 41));
        tbn1 = new QLabel(Widget);
        tbn1->setObjectName(QStringLiteral("tbn1"));
        tbn1->setGeometry(QRect(990, 770, 111, 41));
        voice1 = new QLabel(Widget);
        voice1->setObjectName(QStringLiteral("voice1"));
        voice1->setGeometry(QRect(1122, 774, 40, 40));
        voice = new QPushButton(Widget);
        voice->setObjectName(QStringLiteral("voice"));
        voice->setGeometry(QRect(1122, 774, 40, 40));
        voiceChange = new QSlider(Widget);
        voiceChange->setObjectName(QStringLiteral("voiceChange"));
        voiceChange->setGeometry(QRect(1137, 650, 10, 100));
        voiceChange->setStyleSheet(QLatin1String("\n"
"QSlider::groove:vertical\n"
"{\n"
"    width: 5px;\n"
"    background: #C0C0C0;\n"
"    border: 1px solid #4A708B;\n"
"    border-radius: 1px;\n"
"    padding-left:-1px;\n"
"    padding-right:-1px;\n"
"    padding-top:-1px;\n"
"    padding-bottom:-1px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical\n"
"{\n"
"    background: rgb(232, 232, 232);\n"
"    border: 1px solid rgb(232, 232, 232);\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical\n"
"{\n"
"    width: 10px;\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #c4c4c4, stop:1 #B1B1B1);\n"
"    background: qlineargradient(x1:0, y1:0.2, x2:1, y2:1, stop:0 #5DCCFF, stop: 1 #1874CD);\n"
"    border: 0px solid #777;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:vertical \n"
"{\n"
"    height: 11px;\n"
"    background: qradialgradient\n"
"    (\n"
"        spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, \n"
"        stop:0.6 #45ADED, stop:0.778409 rgba(255, 255, 255, 255)\n"
"    );\n"
"    margin-left: -3"
                        "px;\n"
"    margin-right: -3px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover\n"
"{  \n"
"    height: 11px;\n"
"    background: qradialgradient\n"
"    (\n"
"        spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, \n"
"        stop:0.6 #2A8BDA, stop:0.778409 rgba(255, 255, 255, 255)\n"
"    ); \n"
"    margin-left: -3px;\n"
"    margin-right: -3px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled\n"
"{\n"
"    background: #00009C;\n"
"    border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled\n"
"{\n"
"    background: #eee;\n"
"    border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:vertical:disabled\n"
"{\n"
"    background: #eee;\n"
"    border: 1px solid #aaa;\n"
"    border-radius: 4px;\n"
"}"));
        voiceChange->setMaximum(100);
        voiceChange->setPageStep(10);
        voiceChange->setValue(100);
        voiceChange->setOrientation(Qt::Vertical);
        voicechange = new QLabel(Widget);
        voicechange->setObjectName(QStringLiteral("voicechange"));
        voicechange->setGeometry(QRect(1122, 630, 40, 137));
        voicechange->setStyleSheet(QStringLiteral("background: rgb(255, 255, 255)"));
        starttime = new QLabel(Widget);
        starttime->setObjectName(QStringLiteral("starttime"));
        starttime->setGeometry(QRect(370, 810, 41, 20));
        endtime = new QLabel(Widget);
        endtime->setObjectName(QStringLiteral("endtime"));
        endtime->setGeometry(QRect(870, 810, 41, 20));
        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(420, 817, 441, 5));
        horizontalSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"		border-radius: 5px;\n"
"        height: 10px;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"        width: 3px;\n"
"		background:rgb(255, 0, 127);\n"
"        margin: -13px -1px -10px -1px;\n"
"}\n"
"QSlider::sub-page:horizontal{    \n"
"		background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(230, 230, 230), stop: 1 rgb(255, 0, 0));\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"   		 background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(124, 124, 124), stop: 1.0 rgb(230, 230, 230));\n"
"}\n"
""));
        horizontalSlider->setOrientation(Qt::Horizontal);
        next = new QPushButton(Widget);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(700, 773, 25, 25));
        last = new QPushButton(Widget);
        last->setObjectName(QStringLiteral("last"));
        last->setGeometry(QRect(556, 773, 25, 25));
        voicechange->raise();
        tbn_min->raise();
        tbn_max->raise();
        tbn_close->raise();
        tbn_close1->raise();
        tbn_max1->raise();
        tbn_min1->raise();
        wyy->raise();
        min->raise();
        min1->raise();
        tbn_mail->raise();
        tbn_mail1->raise();
        separate->raise();
        tbn_setting1->raise();
        tbn_clothing->raise();
        tbn_clothing1->raise();
        title_user->raise();
        title_user1->raise();
        tbn_setting->raise();
        tbn_listening->raise();
        tbn_listening1->raise();
        title_searching1->raise();
        title_searching->raise();
        change_right1->raise();
        change_right->raise();
        change_left->raise();
        change_left1->raise();
        cd->raise();
        pause1->raise();
        pause->raise();
        last1->raise();
        next1->raise();
        lyric->raise();
        lyric1->raise();
        range->raise();
        range1->raise();
        label->raise();
        label_2->raise();
        tbn2->raise();
        tbn1->raise();
        voice1->raise();
        voice->raise();
        voiceChange->raise();
        starttime->raise();
        endtime->raise();
        horizontalSlider->raise();
        next->raise();
        last->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        tbn_min->setText(QString());
        tbn_max->setText(QString());
        tbn_close->setText(QString());
        tbn_close1->setText(QString());
        tbn_max1->setText(QString());
        tbn_min1->setText(QString());
        wyy->setText(QString());
        min->setText(QString());
        min1->setText(QString());
        tbn_mail->setText(QString());
        tbn_mail1->setText(QString());
        separate->setText(QString());
        tbn_setting1->setText(QString());
        tbn_clothing->setText(QString());
        tbn_clothing1->setText(QString());
        title_user->setText(QString());
        title_user1->setText(QString());
        tbn_setting->setText(QString());
        tbn_listening->setText(QString());
        tbn_listening1->setText(QString());
        title_searching1->setText(QString());
        title_searching->setText(QString());
        change_right1->setText(QString());
        change_right->setText(QString());
        change_left->setText(QString());
        change_left1->setText(QString());
        cd->setText(QString());
        pause1->setText(QString());
        pause->setText(QString());
        last1->setText(QString());
        next1->setText(QString());
        lyric->setText(QString());
        lyric1->setText(QString());
        range->setText(QString());
        range1->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        tbn2->setText(QString());
        tbn1->setText(QString());
        voice1->setText(QString());
        voice->setText(QString());
        voicechange->setText(QString());
        starttime->setText(QString());
        endtime->setText(QString());
        next->setText(QString());
        last->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
