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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QLabel *labelTextIP;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QPushButton *pushButtonUpdate;
    QListWidget *listWidgetIPs;
    QLineEdit *lineEditIP;
    QSpacerItem *verticalSpacer;
    QWidget *getDataTiming;
    QGridLayout *gridLayout_2;
    QLabel *labelTiming;
    QSlider *horizontalSliderTiming;
    QLabel *labelTimingValue;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    Plotter *widgetPlot;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(645, 503);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        labelTextIP = new QLabel(centralWidget);
        labelTextIP->setObjectName("labelTextIP");

        gridLayout_3->addWidget(labelTextIP, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");

        horizontalLayout->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");

        horizontalLayout->addWidget(pushButtonDisconnect);

        horizontalLayout->setStretch(0, 50);
        horizontalLayout->setStretch(1, 50);

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        pushButtonUpdate = new QPushButton(centralWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        gridLayout->addWidget(pushButtonUpdate, 3, 0, 1, 1);

        listWidgetIPs = new QListWidget(centralWidget);
        listWidgetIPs->setObjectName("listWidgetIPs");

        gridLayout->addWidget(listWidgetIPs, 2, 0, 1, 1);

        lineEditIP = new QLineEdit(centralWidget);
        lineEditIP->setObjectName("lineEditIP");

        gridLayout->addWidget(lineEditIP, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        gridLayout->setRowMinimumHeight(2, 70);
        gridLayout->setRowMinimumHeight(4, 30);

        verticalLayout->addLayout(gridLayout);

        getDataTiming = new QWidget(centralWidget);
        getDataTiming->setObjectName("getDataTiming");
        gridLayout_2 = new QGridLayout(getDataTiming);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        labelTiming = new QLabel(getDataTiming);
        labelTiming->setObjectName("labelTiming");

        gridLayout_2->addWidget(labelTiming, 0, 0, 1, 1);

        horizontalSliderTiming = new QSlider(getDataTiming);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setMaximum(75);
        horizontalSliderTiming->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderTiming, 1, 0, 1, 1);

        labelTimingValue = new QLabel(getDataTiming);
        labelTimingValue->setObjectName("labelTimingValue");

        gridLayout_2->addWidget(labelTimingValue, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonStart = new QPushButton(getDataTiming);
        pushButtonStart->setObjectName("pushButtonStart");

        horizontalLayout_2->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(getDataTiming);
        pushButtonStop->setObjectName("pushButtonStop");

        horizontalLayout_2->addWidget(pushButtonStop);

        horizontalLayout_2->setStretch(0, 50);
        horizontalLayout_2->setStretch(1, 50);

        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        gridLayout_2->setRowStretch(2, 100);

        verticalLayout->addWidget(getDataTiming);

        verticalLayout->setStretch(0, 70);

        horizontalLayout_3->addLayout(verticalLayout);

        widgetPlot = new Plotter(centralWidget);
        widgetPlot->setObjectName("widgetPlot");

        horizontalLayout_3->addWidget(widgetPlot);

        horizontalLayout_3->setStretch(0, 40);
        horizontalLayout_3->setStretch(1, 60);

        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 645, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setMouseTracking(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderTiming, &QSlider::valueChanged, labelTimingValue, &QLabel::setNum);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Consumer", nullptr));
        labelTextIP->setText(QCoreApplication::translate("MainWindow", "Server's IP", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        labelTiming->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        labelTimingValue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
