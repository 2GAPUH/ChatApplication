#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>

class ClientManager : public QObject
{
    Q_OBJECT
public:
    explicit ClientManager(QHostAddress ip = QHostAddress::LocalHost, ushort port = 4500, QObject *parent = 0);
    void connectToServer();
    void sendMessage(QString message);

signals:
    void disconnected();
    void connected();
    void dataReceived(QByteArray data);

private slots:
    void readyRead();

private:
    QTcpSocket* _socket;
    QHostAddress _ip;
    ushort _port;

public slots:

};

#endif // CLIENTMANAGER_H
