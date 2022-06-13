/********************************************************************************
** Form generated from reading UI file 'mainscene.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCENE_H
#define UI_MAINSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScene
{
public:
    QPushButton *individual;
    QLabel *individual1;
    QLabel *exclusive1;
    QPushButton *exclusive;
    QLabel *songlist1;
    QPushButton *songlist;
    QLabel *ranking1;
    QPushButton *ranking;
    QLabel *singer1;
    QPushButton *singer;
    QLabel *latest1;
    QPushButton *latest;

    void setupUi(QWidget *MainScene)
    {
        if (MainScene->objectName().isEmpty())
            MainScene->setObjectName(QStringLiteral("MainScene"));
        MainScene->resize(1028, 673);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainScene->sizePolicy().hasHeightForWidth());
        MainScene->setSizePolicy(sizePolicy);
        MainScene->setMinimumSize(QSize(1028, 673));
        MainScene->setMaximumSize(QSize(1671, 914));
        individual = new QPushButton(MainScene);
        individual->setObjectName(QStringLiteral("individual"));
        individual->setGeometry(QRect(40, 24, 105, 45));
        individual1 = new QLabel(MainScene);
        individual1->setObjectName(QStringLiteral("individual1"));
        individual1->setGeometry(QRect(40, 24, 105, 45));
        exclusive1 = new QLabel(MainScene);
        exclusive1->setObjectName(QStringLiteral("exclusive1"));
        exclusive1->setGeometry(QRect(150, 24, 105, 45));
        exclusive = new QPushButton(MainScene);
        exclusive->setObjectName(QStringLiteral("exclusive"));
        exclusive->setGeometry(QRect(150, 24, 105, 45));
        songlist1 = new QLabel(MainScene);
        songlist1->setObjectName(QStringLiteral("songlist1"));
        songlist1->setGeometry(QRect(265, 24, 50, 45));
        songlist = new QPushButton(MainScene);
        songlist->setObjectName(QStringLiteral("songlist"));
        songlist->setGeometry(QRect(265, 24, 50, 45));
        ranking1 = new QLabel(MainScene);
        ranking1->setObjectName(QStringLiteral("ranking1"));
        ranking1->setGeometry(QRect(325, 24, 75, 45));
        ranking = new QPushButton(MainScene);
        ranking->setObjectName(QStringLiteral("ranking"));
        ranking->setGeometry(QRect(325, 24, 75, 45));
        singer1 = new QLabel(MainScene);
        singer1->setObjectName(QStringLiteral("singer1"));
        singer1->setGeometry(QRect(410, 24, 50, 45));
        singer = new QPushButton(MainScene);
        singer->setObjectName(QStringLiteral("singer"));
        singer->setGeometry(QRect(410, 24, 50, 45));
        latest1 = new QLabel(MainScene);
        latest1->setObjectName(QStringLiteral("latest1"));
        latest1->setGeometry(QRect(470, 24, 105, 45));
        latest = new QPushButton(MainScene);
        latest->setObjectName(QStringLiteral("latest"));
        latest->setGeometry(QRect(470, 24, 105, 45));

        retranslateUi(MainScene);

        QMetaObject::connectSlotsByName(MainScene);
    } // setupUi

    void retranslateUi(QWidget *MainScene)
    {
        MainScene->setWindowTitle(QApplication::translate("MainScene", "Form", Q_NULLPTR));
        individual->setText(QString());
        individual1->setText(QString());
        exclusive1->setText(QString());
        exclusive->setText(QString());
        songlist1->setText(QString());
        songlist->setText(QString());
        ranking1->setText(QString());
        ranking->setText(QString());
        singer1->setText(QString());
        singer->setText(QString());
        latest1->setText(QString());
        latest->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainScene: public Ui_MainScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCENE_H
