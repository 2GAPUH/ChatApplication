#ifndef SERVERMANAGER_H
#define SERVERMANAGER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class ServerManager : public QObject
{
    Q_OBJECT
public:
    explicit ServerManager(ushort port = 4500, QObject *parent = 0);

signals:
    void newClientConnected(QTcpSocket* client);
    void clientDisconnected(QTcpSocket* client);
private slots:
    void newClientConnectionRecieved();
    void onClientDisconected();

public slots:

private: //fields
    QTcpServer * _server;
    QList<QTcpSocket* > _clients;

private: //methods
    void setupServer(ushort port);

};

#endif // SERVERMANAGER_H
