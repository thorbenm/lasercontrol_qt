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
    ui->lcdNumber->display((double)position / 100.0);
    transmit_voltage(current_to_voltage(position / 100.0));
}

void MainWindow::on_lcdNumber_overflow()
{

}
