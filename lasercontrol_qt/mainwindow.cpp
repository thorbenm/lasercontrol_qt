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


void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
   // ui->lcdNumber->display((double)position / 100.0);
  //  transmit_voltage(current_to_voltage(position / 100.0));
    //  result = wiringPiI2CWriteReg16(current, 0x0000, position) ;
//XX    wiringPiI2CWriteReg16(current, 0x0000, position) ;
}

void MainWindow::on_lcdNumber_overflow()
{

}
