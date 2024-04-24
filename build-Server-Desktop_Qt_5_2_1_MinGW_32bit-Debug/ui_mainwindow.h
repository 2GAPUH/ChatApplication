/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *grpChats;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tbChat;
    QGroupBox *grpClients;
    QVBoxLayout *verticalLayout;
    QListWidget *lstClient;
    QPushButton *btnDisconnectAll;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(670, 360);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        grpChats = new QGroupBox(centralWidget);
        grpChats->setObjectName(QStringLiteral("grpChats"));
        horizontalLayout = new QHBoxLayout(grpChats);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tbChat = new QTabWidget(grpChats);
        tbChat->setObjectName(QStringLiteral("tbChat"));

        horizontalLayout->addWidget(tbChat);


        horizontalLayout_2->addWidget(grpChats);

        grpClients = new QGroupBox(centralWidget);
        grpClients->setObjectName(QStringLiteral("grpClients"));
        verticalLayout = new QVBoxLayout(grpClients);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lstClient = new QListWidget(grpClients);
        lstClient->setObjectName(QStringLiteral("lstClient"));

        verticalLayout->addWidget(lstClient);

        btnDisconnectAll = new QPushButton(grpClients);
        btnDisconnectAll->setObjectName(QStringLiteral("btnDisconnectAll"));

        verticalLayout->addWidget(btnDisconnectAll);


        horizontalLayout_2->addWidget(grpClients);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 670, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Server", 0));
        grpChats->setTitle(QApplication::translate("MainWindow", "Chats", 0));
        grpClients->setTitle(QApplication::translate("MainWindow", "Clients", 0));
        btnDisconnectAll->setText(QApplication::translate("MainWindow", "Disconnect all", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
