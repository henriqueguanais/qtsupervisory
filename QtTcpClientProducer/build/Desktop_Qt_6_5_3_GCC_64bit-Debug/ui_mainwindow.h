/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_MainWindow
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(568, 393);
        MainWindow->setMinimumSize(QSize(568, 393));
        centralWidget = new QWidget(MainWindow);
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
        horizontalSliderMax->setGeometry(QRect(10, 170, 181, 16));
        horizontalSliderMax->setOrientation(Qt::Horizontal);
        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setGeometry(QRect(10, 230, 181, 16));
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
        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName("horizontalSliderMin");
        horizontalSliderMin->setGeometry(QRect(10, 110, 181, 16));
        horizontalSliderMin->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 150, 67, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 210, 67, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 568, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "Disconnected", nullptr));
        lineEditIP->setText(QString());
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
