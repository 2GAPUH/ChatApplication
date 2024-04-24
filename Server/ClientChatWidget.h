#ifndef CLIENTCHATWIDGET_H
#define CLIENTCHATWIDGET_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class ClientChatWidget;
}

class ClientChatWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClientChatWidget(QTcpSocket* cleint, QWidget *parent = 0);
    ~ClientChatWidget();

private slots:
    void DataRecived();
    void on_btnSend_clicked();
    void clientDisconnected();

private:
    Ui::ClientChatWidget *ui;
    QTcpSocket * _client;
};

#endif // CLIENTCHATWIDGET_H
