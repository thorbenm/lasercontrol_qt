#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <stdint.h>
//#include <wiringPi.h>
//#include <wiringPiSPI.h>
//#include <unistd.h> // usleep



//bool voltage_out_of_range(double voltage);
//
//uint16_t voltage_to_code(double voltage);
//
//bool transmit(uint16_t code = 0, uint8_t device = 3, unsigned int channel = 0);
//
//bool transmit_voltage(double voltage = 0, uint8_t device = 3, unsigned int channel = 0);
//
//double current_to_voltage(double);
//
//double voltage_to_current(double voltage);



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_horizontalSlider_sliderMoved(int position);

    void on_lcdNumber_overflow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
