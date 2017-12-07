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
