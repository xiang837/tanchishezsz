/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionGame_manual;
    QAction *actionEasy;
    QAction *actionMedium;
    QAction *actionHard;
    QAction *actionExpert;
    QAction *actionBorderless;
    QAction *actionClassic_Box;
    QAction *actionTrail_Station;
    QWidget *centralwidget;
    QPushButton *startgame;
    QMenuBar *menubar;
    QMenu *menu_H;
    QMenu *menuSettings;
    QMenu *menuDifficulty;
    QMenu *menuMap;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MainWindow->setFont(font);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setIconVisibleInMenu(false);
        actionGame_manual = new QAction(MainWindow);
        actionGame_manual->setObjectName(QString::fromUtf8("actionGame_manual"));
        actionEasy = new QAction(MainWindow);
        actionEasy->setObjectName(QString::fromUtf8("actionEasy"));
        actionEasy->setCheckable(true);
        actionMedium = new QAction(MainWindow);
        actionMedium->setObjectName(QString::fromUtf8("actionMedium"));
        actionMedium->setCheckable(true);
        actionHard = new QAction(MainWindow);
        actionHard->setObjectName(QString::fromUtf8("actionHard"));
        actionHard->setCheckable(true);
        actionExpert = new QAction(MainWindow);
        actionExpert->setObjectName(QString::fromUtf8("actionExpert"));
        actionExpert->setCheckable(true);
        actionBorderless = new QAction(MainWindow);
        actionBorderless->setObjectName(QString::fromUtf8("actionBorderless"));
        actionBorderless->setCheckable(true);
        actionClassic_Box = new QAction(MainWindow);
        actionClassic_Box->setObjectName(QString::fromUtf8("actionClassic_Box"));
        actionClassic_Box->setCheckable(true);
        actionTrail_Station = new QAction(MainWindow);
        actionTrail_Station->setObjectName(QString::fromUtf8("actionTrail_Station"));
        actionTrail_Station->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        startgame = new QPushButton(centralwidget);
        startgame->setObjectName(QString::fromUtf8("startgame"));
        startgame->setGeometry(QRect(430, 330, 131, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 21));
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QString::fromUtf8("menu_H"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuDifficulty = new QMenu(menuSettings);
        menuDifficulty->setObjectName(QString::fromUtf8("menuDifficulty"));
        menuMap = new QMenu(menuSettings);
        menuMap->setObjectName(QString::fromUtf8("menuMap"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_H->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menu_H->addAction(actionGame_manual);
        menu_H->addAction(actionAbout);
        menuSettings->addAction(menuDifficulty->menuAction());
        menuSettings->addAction(menuMap->menuAction());
        menuDifficulty->addAction(actionEasy);
        menuDifficulty->addAction(actionMedium);
        menuDifficulty->addAction(actionHard);
        menuDifficulty->addAction(actionExpert);
        menuMap->addAction(actionBorderless);
        menuMap->addAction(actionClassic_Box);
        menuMap->addAction(actionTrail_Station);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Snakegame GUI", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionGame_manual->setText(QCoreApplication::translate("MainWindow", "Game manual", nullptr));
        actionEasy->setText(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        actionMedium->setText(QCoreApplication::translate("MainWindow", "Medium", nullptr));
        actionHard->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
        actionExpert->setText(QCoreApplication::translate("MainWindow", "Expert", nullptr));
        actionBorderless->setText(QCoreApplication::translate("MainWindow", "Borderless", nullptr));
        actionClassic_Box->setText(QCoreApplication::translate("MainWindow", "Classic Box", nullptr));
        actionTrail_Station->setText(QCoreApplication::translate("MainWindow", "Trail station", nullptr));
        startgame->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuDifficulty->setTitle(QCoreApplication::translate("MainWindow", "Difficulty", nullptr));
        menuMap->setTitle(QCoreApplication::translate("MainWindow", "Map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
