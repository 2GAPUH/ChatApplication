#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ServerManager.h"
#include "ClientChatWidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void newClientConnected(QTcpSocket* client);
    void clientDisconnected(QTcpSocket* client);
    
private:
    Ui::MainWindow *ui;
    ServerManager* _server;
    
private: //methods
    void setUpServer();
};

#endif // MAINWINDOW_H
