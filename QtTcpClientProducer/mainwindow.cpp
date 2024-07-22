#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QLabel>
#include <QLineEdit>
#include <QLCDNumber>
#include <QTextBrowser>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::Producer) {
    ui->setupUi(this);
    connect(ui->pushButtonConnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(Connect()));

    connect(ui->pushButtonStop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(stop()));

    connect(ui->pushButtonStart,
            SIGNAL(clicked(bool)),
            this,
            SLOT(start()));

    connect(ui->pushButtonDisconnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(Disconnect()));

    ui->horizontalSliderMax->setValue(35);
    ui->horizontalSliderTiming->setValue(3);
    ui->lineEditIP->setText("127.0.0.1");
}

void MainWindow::Connect() {
    socket = new QTcpSocket(this);
    socket->connectToHost(getIP(),1234);
    if(socket->waitForConnected(3000)){
        ui->textBrowserCommand->append("Connected\r\n");
        ui->labelStatus->setText("Connected");
    }
    else{
        ui->textBrowserCommand->append("Failed\r\n");
    }
}

void MainWindow::Disconnect() {
    if(socket->state() == QAbstractSocket::ConnectedState) {
        socket->disconnectFromHost();
        ui->textBrowserCommand->append("Disconnected\r\n");
        ui->labelStatus->setText("Disconnected");
    }
    else {
        ui->textBrowserCommand->append("You have already disconnected\r\n");
    }
    if(timerIsRunning)
        killTimer(timer);
}

void MainWindow::start() {
    timer = ui->horizontalSliderTiming->value();
    timer = startTimer((timer)*1000);
    timerIsRunning = true;
}

void MainWindow::stop() {
    killTimer(timer);
    timerIsRunning = false;
}

void MainWindow::timerEvent(QTimerEvent *t) {
    putData();
}

MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}

QString MainWindow::getIP() {
    return ui->lineEditIP->text();;
}

void MainWindow::putData() {
    QDateTime datetime;
    QString str;
    qint64 msecdate;
    int max, min;

    max = ui->horizontalSliderMax->value();
    min = ui->horizontalSliderMin->value();

    if(min>max) {
        ui->textBrowserCommand->append("Invalid range\r\n");
        killTimer(timer);
        timerIsRunning = false;
    }
    if(socket->state() == QAbstractSocket::ConnectedState){
        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set "+ QString::number(msecdate) + " " +
              QString::number(rand()%(max - min) + min)+"\r\n";
        ui->textBrowserCommand->append(str);
    }
    socket->write(str.toStdString().c_str());
}
