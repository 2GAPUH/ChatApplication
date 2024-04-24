#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ClientManager.h"

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
    void on_actionConnect_triggered();
    void dataRecieved(QByteArray data);
    void on_btnSend_clicked();

    void handleClientDisconnected();
    void handleClientConnected();

private:
    Ui::MainWindow *ui;
    ClientManager* _client;

};

#endif // MAINWINDOW_H
