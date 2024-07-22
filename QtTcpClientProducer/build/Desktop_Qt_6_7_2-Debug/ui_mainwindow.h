/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Producer
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QLabel *labelStatus;
    QSlider *horizontalSliderMax;
    QSlider *horizontalSliderTiming;
    QLineEdit *lineEditIP;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QTextBrowser *textBrowserCommand;
    QSlider *horizontalSliderMin;
    QLabel *labelMin;
    QLabel *labelMax;
    QLabel *labelTiming;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Producer)
    {
        if (Producer->objectName().isEmpty())
            Producer->setObjectName("Producer");
        Producer->resize(568, 393);
        Producer->setMinimumSize(QSize(568, 393));
        centralWidget = new QWidget(Producer);
        centralWidget->setObjectName("centralWidget");
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");
        pushButtonConnect->setGeometry(QRect(10, 40, 121, 25));
        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");
        pushButtonDisconnect->setGeometry(QRect(140, 40, 121, 25));
        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName("labelStatus");
        labelStatus->setGeometry(QRect(10, 300, 111, 31));
        horizontalSliderMax = new QSlider(centralWidget);
        horizontalSliderMax->setObjectName("horizontalSliderMax");
        horizontalSliderMax->setGeometry(QRect(10, 170, 191, 16));
        horizontalSliderMax->setOrientation(Qt::Horizontal);
        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setGeometry(QRect(10, 230, 221, 16));
        horizontalSliderTiming->setOrientation(Qt::Horizontal);
        lineEditIP = new QLineEdit(centralWidget);
        lineEditIP->setObjectName("lineEditIP");
        lineEditIP->setGeometry(QRect(10, 10, 251, 25));
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");
        pushButtonStart->setGeometry(QRect(10, 270, 121, 25));
        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName("pushButtonStop");
        pushButtonStop->setGeometry(QRect(140, 270, 121, 25));
        textBrowserCommand = new QTextBrowser(centralWidget);
        textBrowserCommand->setObjectName("textBrowserCommand");
        textBrowserCommand->setGeometry(QRect(270, 10, 281, 321));
        textBrowserCommand->setStyleSheet(QString::fromUtf8(""));
        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName("horizontalSliderMin");
        horizontalSliderMin->setGeometry(QRect(10, 110, 191, 16));
        horizontalSliderMin->setOrientation(Qt::Horizontal);
        labelMin = new QLabel(centralWidget);
        labelMin->setObjectName("labelMin");
        labelMin->setGeometry(QRect(10, 90, 67, 17));
        labelMax = new QLabel(centralWidget);
        labelMax->setObjectName("labelMax");
        labelMax->setGeometry(QRect(10, 150, 67, 17));
        labelTiming = new QLabel(centralWidget);
        labelTiming->setObjectName("labelTiming");
        labelTiming->setGeometry(QRect(10, 210, 67, 17));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(210, 100, 51, 23));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setGeometry(QRect(210, 160, 51, 23));
        lcdNumber_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 220, 31, 31));
        Producer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Producer);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 568, 22));
        Producer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Producer);
        mainToolBar->setObjectName("mainToolBar");
        Producer->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Producer);
        statusBar->setObjectName("statusBar");
        Producer->setStatusBar(statusBar);

        retranslateUi(Producer);
        QObject::connect(horizontalSliderMin, &QSlider::valueChanged, lcdNumber, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSliderMax, &QSlider::valueChanged, lcdNumber_2, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSliderTiming, &QSlider::valueChanged, label, qOverload<int>(&QLabel::setNum));

        QMetaObject::connectSlotsByName(Producer);
    } // setupUi

    void retranslateUi(QMainWindow *Producer)
    {
        Producer->setWindowTitle(QCoreApplication::translate("Producer", "Producer", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("Producer", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("Producer", "Disconnect", nullptr));
        labelStatus->setText(QCoreApplication::translate("Producer", "Disconnected", nullptr));
        lineEditIP->setText(QString());
        pushButtonStart->setText(QCoreApplication::translate("Producer", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("Producer", "Stop", nullptr));
        labelMin->setText(QCoreApplication::translate("Producer", "Min", nullptr));
        labelMax->setText(QCoreApplication::translate("Producer", "Max", nullptr));
        labelTiming->setText(QCoreApplication::translate("Producer", "Timing(s)", nullptr));
        label->setText(QCoreApplication::translate("Producer", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Producer: public Ui_Producer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
