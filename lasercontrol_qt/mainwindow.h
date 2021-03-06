#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <iostream>
//#include <errno.h>
#include <wiringPiI2C.h>
#include <unistd.h>
#include <stdlib.h>


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

    void on_horizontalSlider_piezo_sliderMoved(int position);

    void on_horizontalSlider_current_sliderMoved(int position);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
