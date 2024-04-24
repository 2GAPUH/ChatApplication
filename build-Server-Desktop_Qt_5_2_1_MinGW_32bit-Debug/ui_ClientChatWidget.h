/********************************************************************************
** Form generated from reading UI file 'ClientChatWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTCHATWIDGET_H
#define UI_CLIENTCHATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientChatWidget
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lstMessages;
    QWidget *wdgSend;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lnMessage;
    QPushButton *btnSend;

    void setupUi(QWidget *ClientChatWidget)
    {
        if (ClientChatWidget->objectName().isEmpty())
            ClientChatWidget->setObjectName(QStringLiteral("ClientChatWidget"));
        ClientChatWidget->resize(616, 432);
        verticalLayout = new QVBoxLayout(ClientChatWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lstMessages = new QListWidget(ClientChatWidget);
        lstMessages->setObjectName(QStringLiteral("lstMessages"));

        verticalLayout->addWidget(lstMessages);

        wdgSend = new QWidget(ClientChatWidget);
        wdgSend->setObjectName(QStringLiteral("wdgSend"));
        horizontalLayout = new QHBoxLayout(wdgSend);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(wdgSend);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lnMessage = new QLineEdit(wdgSend);
        lnMessage->setObjectName(QStringLiteral("lnMessage"));

        horizontalLayout->addWidget(lnMessage);

        btnSend = new QPushButton(wdgSend);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        horizontalLayout->addWidget(btnSend);


        verticalLayout->addWidget(wdgSend);


        retranslateUi(ClientChatWidget);

        QMetaObject::connectSlotsByName(ClientChatWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientChatWidget)
    {
        ClientChatWidget->setWindowTitle(QApplication::translate("ClientChatWidget", "Form", 0));
        label->setText(QApplication::translate("ClientChatWidget", "Message", 0));
        btnSend->setText(QApplication::translate("ClientChatWidget", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientChatWidget: public Ui_ClientChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTCHATWIDGET_H
