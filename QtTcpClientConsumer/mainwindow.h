#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <vector>

namespace Ui {
class Producer;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void Connect();
    void Disconnect();
    void getData();
    QString getIP();
    void Start();
    void Stop();
    void timerEvent(QTimerEvent *t);
    void Update();
    void updateGetDataVisibility();
private:
    Ui::Producer *ui;
    QTcpSocket *socket;
    bool timerIsRunning = false;
    int timer;
    QString pastIP;
    std::vector<QString> ips;
};

#endif // MAINWINDOW_H
