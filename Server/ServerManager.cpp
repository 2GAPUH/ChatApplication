#include "ServerManager.h"

ServerManager::ServerManager(ushort port, QObject *parent) :    QObject(parent)
{
    setupServer(port);
}

void ServerManager::newClientConnectionRecieved()
{
    QTcpSocket* client = _server->nextPendingConnection();
    _clients << client;//flag
    int id = _clients.length();//как-то исправить
    client->setProperty("id", id);
    connect(client, &QTcpSocket::disconnected, this, &ServerManager::onClientDisconected);
    emit newClientConnected(client);
}

void ServerManager::onClientDisconected()
{
    QTcpSocket* client = qobject_cast<QTcpSocket*>(sender());
    //int id = client->property("id").toInt();
    _clients.removeOne(client);
    emit clientDisconnected(client);
}

void ServerManager::setupServer(ushort port)
{
    _server = new QTcpServer(this);
    connect(_server, &QTcpServer::newConnection, this, &ServerManager::newClientConnectionRecieved);
    _server->listen(QHostAddress::Any, port);
}
