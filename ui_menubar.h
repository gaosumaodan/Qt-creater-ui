/********************************************************************************
** Form generated from reading UI file 'menubar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUBAR_H
#define UI_MENUBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuBar
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QLabel *Focus1;
    QPushButton *Video;
    QLabel *FoundMusic1;
    QLabel *Podcast1;
    QLabel *Live1;
    QPushButton *Focus;
    QLabel *FM1;
    QPushButton *FM;
    QPushButton *Podcast;
    QPushButton *Live;
    QLabel *Video1;
    QLabel *bk;
    QLabel *MyMusic;
    QPushButton *Local;
    QLabel *Local1;
    QPushButton *Recent;
    QLabel *Recent1;
    QLabel *MyCloudMusic1;
    QPushButton *MyCloudMusic;
    QPushButton *MyPodcast;
    QLabel *MyPodcast1;
    QPushButton *MyEnshrine;
    QLabel *MyEnshrine1;
    QPushButton *SongList;
    QLabel *SongList1;
    QPushButton *FoundMusic;

    void setupUi(QWidget *MenuBar)
    {
        if (MenuBar->objectName().isEmpty())
            MenuBar->setObjectName(QStringLiteral("MenuBar"));
        MenuBar->resize(251, 672);
        MenuBar->setMinimumSize(QSize(251, 672));
        MenuBar->setMaximumSize(QSize(251, 914));
        verticalLayout = new QVBoxLayout(MenuBar);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(MenuBar);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 251, 672));
        scrollAreaWidgetContents->setMinimumSize(QSize(249, 0));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QStringLiteral("widget"));
        Focus1 = new QLabel(widget);
        Focus1->setObjectName(QStringLiteral("Focus1"));
        Focus1->setGeometry(QRect(15, 165, 225, 45));
        Focus1->setMinimumSize(QSize(225, 45));
        Focus1->setMaximumSize(QSize(225, 45));
        Video = new QPushButton(widget);
        Video->setObjectName(QStringLiteral("Video"));
        Video->setGeometry(QRect(15, 115, 225, 45));
        Video->setMinimumSize(QSize(225, 45));
        Video->setMaximumSize(QSize(225, 45));
        FoundMusic1 = new QLabel(widget);
        FoundMusic1->setObjectName(QStringLiteral("FoundMusic1"));
        FoundMusic1->setGeometry(QRect(15, 15, 225, 45));
        FoundMusic1->setMinimumSize(QSize(225, 45));
        FoundMusic1->setMaximumSize(QSize(225, 45));
        Podcast1 = new QLabel(widget);
        Podcast1->setObjectName(QStringLiteral("Podcast1"));
        Podcast1->setGeometry(QRect(15, 65, 225, 45));
        Podcast1->setMinimumSize(QSize(225, 45));
        Podcast1->setMaximumSize(QSize(225, 45));
        Live1 = new QLabel(widget);
        Live1->setObjectName(QStringLiteral("Live1"));
        Live1->setGeometry(QRect(15, 215, 225, 45));
        Live1->setMinimumSize(QSize(225, 45));
        Live1->setMaximumSize(QSize(225, 45));
        Focus = new QPushButton(widget);
        Focus->setObjectName(QStringLiteral("Focus"));
        Focus->setGeometry(QRect(15, 165, 225, 45));
        Focus->setMinimumSize(QSize(225, 45));
        Focus->setMaximumSize(QSize(225, 45));
        FM1 = new QLabel(widget);
        FM1->setObjectName(QStringLiteral("FM1"));
        FM1->setGeometry(QRect(15, 265, 225, 45));
        FM1->setMinimumSize(QSize(225, 45));
        FM1->setMaximumSize(QSize(225, 45));
        FM = new QPushButton(widget);
        FM->setObjectName(QStringLiteral("FM"));
        FM->setGeometry(QRect(15, 265, 225, 45));
        FM->setMinimumSize(QSize(225, 45));
        FM->setMaximumSize(QSize(225, 45));
        Podcast = new QPushButton(widget);
        Podcast->setObjectName(QStringLiteral("Podcast"));
        Podcast->setGeometry(QRect(15, 65, 225, 45));
        Podcast->setMinimumSize(QSize(225, 45));
        Podcast->setMaximumSize(QSize(225, 45));
        Live = new QPushButton(widget);
        Live->setObjectName(QStringLiteral("Live"));
        Live->setGeometry(QRect(15, 215, 225, 45));
        Live->setMinimumSize(QSize(225, 45));
        Live->setMaximumSize(QSize(225, 45));
        Video1 = new QLabel(widget);
        Video1->setObjectName(QStringLiteral("Video1"));
        Video1->setGeometry(QRect(15, 115, 225, 45));
        Video1->setMinimumSize(QSize(225, 45));
        Video1->setMaximumSize(QSize(225, 45));
        bk = new QLabel(widget);
        bk->setObjectName(QStringLiteral("bk"));
        bk->setGeometry(QRect(0, 0, 251, 672));
        bk->setMinimumSize(QSize(251, 672));
        bk->setMaximumSize(QSize(251, 1150));
        MyMusic = new QLabel(widget);
        MyMusic->setObjectName(QStringLiteral("MyMusic"));
        MyMusic->setGeometry(QRect(20, 320, 75, 30));
        Local = new QPushButton(widget);
        Local->setObjectName(QStringLiteral("Local"));
        Local->setGeometry(QRect(15, 360, 225, 45));
        Local->setMinimumSize(QSize(225, 45));
        Local->setMaximumSize(QSize(225, 45));
        Local1 = new QLabel(widget);
        Local1->setObjectName(QStringLiteral("Local1"));
        Local1->setGeometry(QRect(15, 360, 225, 45));
        Local1->setMinimumSize(QSize(225, 45));
        Local1->setMaximumSize(QSize(225, 45));
        Recent = new QPushButton(widget);
        Recent->setObjectName(QStringLiteral("Recent"));
        Recent->setGeometry(QRect(15, 410, 225, 45));
        Recent->setMinimumSize(QSize(225, 45));
        Recent->setMaximumSize(QSize(225, 45));
        Recent1 = new QLabel(widget);
        Recent1->setObjectName(QStringLiteral("Recent1"));
        Recent1->setGeometry(QRect(15, 410, 225, 45));
        Recent1->setMinimumSize(QSize(225, 45));
        Recent1->setMaximumSize(QSize(225, 45));
        MyCloudMusic1 = new QLabel(widget);
        MyCloudMusic1->setObjectName(QStringLiteral("MyCloudMusic1"));
        MyCloudMusic1->setGeometry(QRect(15, 460, 225, 45));
        MyCloudMusic1->setMinimumSize(QSize(225, 45));
        MyCloudMusic1->setMaximumSize(QSize(225, 45));
        MyCloudMusic = new QPushButton(widget);
        MyCloudMusic->setObjectName(QStringLiteral("MyCloudMusic"));
        MyCloudMusic->setGeometry(QRect(15, 460, 225, 45));
        MyCloudMusic->setMinimumSize(QSize(225, 45));
        MyCloudMusic->setMaximumSize(QSize(225, 45));
        MyPodcast = new QPushButton(widget);
        MyPodcast->setObjectName(QStringLiteral("MyPodcast"));
        MyPodcast->setGeometry(QRect(15, 510, 225, 45));
        MyPodcast->setMinimumSize(QSize(225, 45));
        MyPodcast->setMaximumSize(QSize(225, 45));
        MyPodcast1 = new QLabel(widget);
        MyPodcast1->setObjectName(QStringLiteral("MyPodcast1"));
        MyPodcast1->setGeometry(QRect(15, 510, 225, 45));
        MyPodcast1->setMinimumSize(QSize(225, 45));
        MyPodcast1->setMaximumSize(QSize(225, 45));
        MyEnshrine = new QPushButton(widget);
        MyEnshrine->setObjectName(QStringLiteral("MyEnshrine"));
        MyEnshrine->setGeometry(QRect(15, 560, 225, 45));
        MyEnshrine->setMinimumSize(QSize(225, 45));
        MyEnshrine->setMaximumSize(QSize(225, 45));
        MyEnshrine1 = new QLabel(widget);
        MyEnshrine1->setObjectName(QStringLiteral("MyEnshrine1"));
        MyEnshrine1->setGeometry(QRect(15, 560, 225, 45));
        MyEnshrine1->setMinimumSize(QSize(225, 45));
        MyEnshrine1->setMaximumSize(QSize(225, 45));
        SongList = new QPushButton(widget);
        SongList->setObjectName(QStringLiteral("SongList"));
        SongList->setGeometry(QRect(15, 615, 225, 45));
        SongList1 = new QLabel(widget);
        SongList1->setObjectName(QStringLiteral("SongList1"));
        SongList1->setGeometry(QRect(15, 615, 225, 45));
        FoundMusic = new QPushButton(widget);
        FoundMusic->setObjectName(QStringLiteral("FoundMusic"));
        FoundMusic->setGeometry(QRect(15, 15, 225, 45));
        FoundMusic->setMinimumSize(QSize(225, 45));
        FoundMusic->setMaximumSize(QSize(225, 45));
        MyCloudMusic->raise();
        bk->raise();
        Focus1->raise();
        Video->raise();
        FoundMusic1->raise();
        Podcast1->raise();
        Live1->raise();
        Focus->raise();
        FM1->raise();
        FM->raise();
        Podcast->raise();
        Live->raise();
        Video1->raise();
        MyMusic->raise();
        Local->raise();
        Recent->raise();
        Recent1->raise();
        MyCloudMusic1->raise();
        MyPodcast->raise();
        MyEnshrine->raise();
        Local1->raise();
        MyEnshrine1->raise();
        MyPodcast1->raise();
        SongList->raise();
        SongList1->raise();
        FoundMusic->raise();

        verticalLayout_2->addWidget(widget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(MenuBar);

        QMetaObject::connectSlotsByName(MenuBar);
    } // setupUi

    void retranslateUi(QWidget *MenuBar)
    {
        MenuBar->setWindowTitle(QApplication::translate("MenuBar", "Form", Q_NULLPTR));
        Focus1->setText(QString());
        Video->setText(QString());
        FoundMusic1->setText(QString());
        Podcast1->setText(QString());
        Live1->setText(QString());
        Focus->setText(QString());
        FM1->setText(QString());
        FM->setText(QString());
        Podcast->setText(QString());
        Live->setText(QString());
        Video1->setText(QString());
        bk->setText(QString());
        MyMusic->setText(QString());
        Local->setText(QString());
        Local1->setText(QString());
        Recent->setText(QString());
        Recent1->setText(QString());
        MyCloudMusic1->setText(QString());
        MyCloudMusic->setText(QString());
        MyPodcast->setText(QString());
        MyPodcast1->setText(QString());
        MyEnshrine->setText(QString());
        MyEnshrine1->setText(QString());
        SongList->setText(QString());
        SongList1->setText(QString());
        FoundMusic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MenuBar: public Ui_MenuBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUBAR_H
