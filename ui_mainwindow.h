/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Oct 11 19:08:02 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include <playerbutton.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    PlayerButton *p1button;
    PlayerButton *p2button;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGraphicsView *gridSquare00;
    QGraphicsView *gridSquare01;
    QGraphicsView *gridSquare11;
    QGraphicsView *gridSquare12;
    QGraphicsView *gridSquare02;
    QGraphicsView *gridSquare20;
    QGraphicsView *gridSquare22;
    QGraphicsView *gridSquare21;
    QGraphicsView *gridSquare10;
    QMenuBar *menuBar;
    QMenu *menuTic_Tac_Toe;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(380, 332);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setAutoFillBackground(true);
        p1button = new PlayerButton(centralWidget);
        p1button->setObjectName(QString::fromUtf8("p1button"));
        p1button->setGeometry(QRect(280, 70, 75, 23));
        p1button->setCheckable(false);
        p1button->setProperty("m_playerID", QVariant(1));
        p2button = new PlayerButton(centralWidget);
        p2button->setObjectName(QString::fromUtf8("p2button"));
        p2button->setGeometry(QRect(280, 160, 75, 23));
        p2button->setProperty("m_playerID", QVariant(-1));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 256, 256));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridSquare00 = new QGraphicsView(gridLayoutWidget);
        gridSquare00->setObjectName(QString::fromUtf8("gridSquare00"));

        gridLayout->addWidget(gridSquare00, 0, 0, 1, 1);

        gridSquare01 = new QGraphicsView(gridLayoutWidget);
        gridSquare01->setObjectName(QString::fromUtf8("gridSquare01"));

        gridLayout->addWidget(gridSquare01, 0, 1, 1, 1);

        gridSquare11 = new QGraphicsView(gridLayoutWidget);
        gridSquare11->setObjectName(QString::fromUtf8("gridSquare11"));

        gridLayout->addWidget(gridSquare11, 1, 1, 1, 1);

        gridSquare12 = new QGraphicsView(gridLayoutWidget);
        gridSquare12->setObjectName(QString::fromUtf8("gridSquare12"));

        gridLayout->addWidget(gridSquare12, 1, 3, 1, 1);

        gridSquare02 = new QGraphicsView(gridLayoutWidget);
        gridSquare02->setObjectName(QString::fromUtf8("gridSquare02"));

        gridLayout->addWidget(gridSquare02, 0, 3, 1, 1);

        gridSquare20 = new QGraphicsView(gridLayoutWidget);
        gridSquare20->setObjectName(QString::fromUtf8("gridSquare20"));

        gridLayout->addWidget(gridSquare20, 2, 0, 1, 1);

        gridSquare22 = new QGraphicsView(gridLayoutWidget);
        gridSquare22->setObjectName(QString::fromUtf8("gridSquare22"));

        gridLayout->addWidget(gridSquare22, 2, 3, 1, 1);

        gridSquare21 = new QGraphicsView(gridLayoutWidget);
        gridSquare21->setObjectName(QString::fromUtf8("gridSquare21"));

        gridLayout->addWidget(gridSquare21, 2, 1, 1, 1);

        gridSquare10 = new QGraphicsView(gridLayoutWidget);
        gridSquare10->setObjectName(QString::fromUtf8("gridSquare10"));

        gridLayout->addWidget(gridSquare10, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 380, 22));
        menuTic_Tac_Toe = new QMenu(menuBar);
        menuTic_Tac_Toe->setObjectName(QString::fromUtf8("menuTic_Tac_Toe"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        mainToolBar->setMovable(false);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTic_Tac_Toe->menuAction());
        menuTic_Tac_Toe->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(MainWindow, SIGNAL(setText(QString)), p1button, SLOT(setButtonText(QString)));
        QObject::connect(p1button, SIGNAL(changeCurrentPlayer(PlayerType)), MainWindow, SLOT(setPlayerID(PlayerType)));
        QObject::connect(p2button, SIGNAL(changeCurrentPlayer(PlayerType)), MainWindow, SLOT(setPlayerID(PlayerType)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        p1button->setText(QApplication::translate("MainWindow", "Player 1", 0, QApplication::UnicodeUTF8));
        p2button->setText(QApplication::translate("MainWindow", "Player 2", 0, QApplication::UnicodeUTF8));
        menuTic_Tac_Toe->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
