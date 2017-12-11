#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_horizontalSlider_piezo_sliderMoved(int position)
{
    wiringPiI2CWriteReg16(wiringPiI2CSetup(0x12), 0x0000, position) ;
}

void MainWindow::on_horizontalSlider_current_sliderMoved(int position)
{
    wiringPiI2CWriteReg16(wiringPiI2CSetup(0x10), 0x0000, position) ;
}

void MainWindow::on_pushButton_clicked()
{
    wiringPiI2CWriteReg16(wiringPiI2CSetup(0x10), 0x0001, 255);
    usleep(100000);
    wiringPiI2CWriteReg16(wiringPiI2CSetup(0x10), 0x0001, 0x0000);
}

void MainWindow::on_pushButton_2_clicked()
{
   system("shutdown -P now");
   //QProcess myProcess;
   //myProcess.startDetached("sudo shutdown -P now")
}
