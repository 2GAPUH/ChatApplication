#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralWidget->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionConnect_triggered()
{
    _client = new ClientManager(QHostAddress("109.194.11.214"));

    connect(_client, &ClientManager::connected, this, &MainWindow::handleClientConnected);

    connect(_client, &ClientManager::disconnected, this, &MainWindow::handleClientDisconnected);

    connect(_client, &ClientManager::dataReceived, this, &MainWindow::dataRecieved);

    _client->connectToServer();
}

void MainWindow::dataRecieved(QByteArray data)
{
    ui->lstMessages->addItem(data);
}

void MainWindow::on_btnSend_clicked()
{
    QString message = ui->lnMessage->text().trimmed();
    _client->sendMessage(message);
    ui->lstMessages->addItem(message);
    ui->lnMessage->clear();
}

void MainWindow::handleClientDisconnected()
{
    ui->centralWidget->setEnabled(false);
}

void MainWindow::handleClientConnected()
{
    ui->centralWidget->setEnabled(true);
}
