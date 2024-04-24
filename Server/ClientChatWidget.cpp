#include "ClientChatWidget.h"
#include "ui_ClientChatWidget.h"

ClientChatWidget::ClientChatWidget(QTcpSocket* client, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientChatWidget),
    _client(client)
{
    ui->setupUi(this);
    connect(_client, &QTcpSocket::readyRead, this, &ClientChatWidget::DataRecived);
    connect(_client, &QTcpSocket::disconnected, this, &ClientChatWidget::clientDisconnected);
}

ClientChatWidget::~ClientChatWidget()
{
    delete ui;
}

void ClientChatWidget::DataRecived()
{
    QByteArray data = _client->readAll();
    ui->lstMessages->addItem(data);
}

void ClientChatWidget::on_btnSend_clicked()
{
    _client->write(ui->lnMessage->text().trimmed().toUtf8());
    ui->lnMessage->setText("");//flag ui->lnMessage->clear();
}

void ClientChatWidget::clientDisconnected()
{
    ui->wdgSend->setEnabled(false);
}
