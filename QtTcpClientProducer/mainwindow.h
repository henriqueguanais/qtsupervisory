#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>

namespace Ui {
class Producer;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void putData();
    void Connect();
    void Disconnect();
    void start();
    void stop();
    QString getIP();
    void timerEvent(QTimerEvent *t);

private:
    Ui::Producer *ui;
    QTcpSocket *socket;
    int timer;
    bool timerIsRunning = false;
};

#endif // MAINWINDOW_H
