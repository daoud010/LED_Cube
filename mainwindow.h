#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>
#include <QLabel>
#include <QComboBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QSpinBox>
#include <QGroupBox>
#include <QSizePolicy>
#include "glwidget.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QSlider *createSlider(const char *changedSignal, const char *setterSlot);
    void initialize();
    void createActions();

private:
    QGroupBox *controlPanel;
    QGroupBox *firstcontrol;
    QGroupBox *secondcontrol;
    QGroupBox *thirdcontrol;
    QGroupBox *fourthcontrol;

    QSpinBox *xspinbox;
    QSpinBox *yspinbox;
    QSpinBox *zspinbox;

    QSpinBox *xRotspinbox;
    QSpinBox *yRotspinbox;
    QSpinBox *zRotspinbox;

    QSlider *sliderx;
    QSlider *slidery;
    QSlider *sliderz;

    QSlider *sliderRotX;
    QSlider *sliderRotY;
    QSlider *sliderRotZ;

    QLabel *labelX;
    QLabel *labelY;
    QLabel *labelZ;

    QLabel *labelXRot;
    QLabel *labelYRot;
    QLabel *labelZRot;

    QComboBox *color;

    QSlider *ledSpacing;


};

#endif // MAINWINDOW_H
