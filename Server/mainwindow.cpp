#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setUpServer();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newClientConnected(QTcpSocket *client)
{
    int id = client->property("id").toInt();
    ui->lstClient->addItem(QString("New client added: %1").arg(id));
    ClientChatWidget* chatWidget = new ClientChatWidget(client);
    ui->tbChat->addTab(chatWidget, QString("Client %1").arg(id));
}

void MainWindow::clientDisconnected(QTcpSocket *client)
{
    int id = client->property("id").toInt();
    ui->lstClient->addItem(QString("Client disconnected: %1").arg(id));
}

void MainWindow::setUpServer()
{
    _server = new ServerManager();
    connect(_server, &ServerManager::newClientConnected, this, &MainWindow::newClientConnected);
    connect(_server, &ServerManager::clientDisconnected, this, &MainWindow::clientDisconnected);
}
