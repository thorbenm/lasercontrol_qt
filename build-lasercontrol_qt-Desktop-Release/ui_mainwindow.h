/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_current;
    QLabel *label_piezo;
    QSlider *horizontalSlider_current;
    QSlider *horizontalSlider_piezo;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(813, 437);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_current = new QLabel(centralWidget);
        label_current->setObjectName(QStringLiteral("label_current"));
        label_current->setGeometry(QRect(120, 180, 101, 21));
        label_piezo = new QLabel(centralWidget);
        label_piezo->setObjectName(QStringLiteral("label_piezo"));
        label_piezo->setGeometry(QRect(120, 100, 101, 21));
        horizontalSlider_current = new QSlider(centralWidget);
        horizontalSlider_current->setObjectName(QStringLiteral("horizontalSlider_current"));
        horizontalSlider_current->setGeometry(QRect(260, 180, 381, 22));
        horizontalSlider_current->setOrientation(Qt::Horizontal);
        horizontalSlider_piezo = new QSlider(centralWidget);
        horizontalSlider_piezo->setObjectName(QStringLiteral("horizontalSlider_piezo"));
        horizontalSlider_piezo->setGeometry(QRect(260, 100, 381, 22));
        horizontalSlider_piezo->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 230, 141, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 320, 113, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 813, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_current->setText(QApplication::translate("MainWindow", "Current:", 0));
        label_piezo->setText(QApplication::translate("MainWindow", "Piezo:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "On/Off", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Shutdown", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
