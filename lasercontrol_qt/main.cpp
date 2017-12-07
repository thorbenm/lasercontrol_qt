#include "mainwindow.h"
#include <QApplication>



void setup(){

      current = wiringPiI2CSetup(0x10);
      piezo = wiringPiI2CSetup(0x12);
}


int main(int argc, char *argv[])
{
    setup();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
