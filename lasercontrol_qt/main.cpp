#include "mainwindow.h"
#include <QApplication>



void setup(){
    int current, piezo; //, result;

      wiringPiI2CSetup(0x10);
      wiringPiI2CSetup(0x12);
}


int main(int argc, char *argv[])
{
    setup();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
