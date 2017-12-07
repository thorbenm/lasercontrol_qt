#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <iostream>
//#include <errno.h>
//XX#include <wiringPiI2C.h>
//#include <unistd.h>



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
