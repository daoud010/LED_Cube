#include "mainwindow.h"
#include "glwidget.h"
#include "ui_mainwindow.h"
#include "cubeclass.h"

MainWindow::MainWindow(QWidget *parent)
{
    initialize();
    createActions();
}

MainWindow::~MainWindow()
{
    //delete ui;
    //resize(1000,1000);
}

void
MainWindow::initialize()
{

    controlPanel    = new QGroupBox("Control Panel");
    firstcontrol    = new QGroupBox(tr("LED Count"));
    secondcontrol   = new QGroupBox(tr("Rotation"));
    thirdcontrol    = new QGroupBox(tr("LED Color"));
    fourthcontrol   = new QGroupBox(tr("LED Spacing"));

    xspinbox = new QSpinBox();
    yspinbox = new QSpinBox();
    zspinbox = new QSpinBox();

    xspinbox->setRange (10,100);
    yspinbox->setRange (10,100);
    zspinbox->setRange (10,100);
    xspinbox->setValue(10);
    yspinbox->setValue(10);
    zspinbox->setValue(10);

    sliderx = new QSlider();
    slidery = new QSlider();
    sliderz = new QSlider();

    sliderx->setRange (10,100);
    slidery->setRange (10,100);
    sliderz->setRange (10,100);

    labelX = new QLabel("X");
    labelY = new QLabel("Y");
    labelZ = new QLabel("Z");

    labelXRot = new QLabel("X Rotation");
    labelYRot = new QLabel("Y Rotation");
    labelZRot = new QLabel("Z Rotation");

    xRotspinbox = new QSpinBox();
    yRotspinbox = new QSpinBox();
    zRotspinbox = new QSpinBox();

    xRotspinbox->setRange (10,100);
    yRotspinbox->setRange (10,100);
    zRotspinbox->setRange (10,100);
    xRotspinbox->setValue(10);
    yRotspinbox->setValue(10);
    zRotspinbox->setValue(10);

    sliderRotX = new QSlider();
    sliderRotY = new QSlider();
    sliderRotZ = new QSlider();

    sliderRotX->setRange (10,100);
    sliderRotY->setRange (10,100);
    sliderRotZ->setRange (10,100);

    QLabel *ledSpaceLabel = new QLabel("Distance between LEDs");
    ledSpacing = new QSlider(Qt::Horizontal);
    ledSpacing->setFixedWidth(100);
    ledSpacing->setRange(2,10);

    QLabel *colorLabel = new QLabel("Choose a Color");

    color = new QComboBox();
    color->addItem("White");
    color->addItem("Red");
    color->addItem("Blue");
    color->addItem("Yellow");
    color->addItem("Green");

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    QGridLayout *ledCount = new QGridLayout();
    ledCount->addWidget(sliderx,1,1);
    ledCount->addWidget(slidery,1,2);
    ledCount->addWidget(sliderz,1,3);
    ledCount->addWidget(labelX,2,1);
    ledCount->addWidget(labelY,2,2);
    ledCount->addWidget(labelZ,2,3);
    ledCount->addWidget(xspinbox,3,1);
    ledCount->addWidget(yspinbox,3,2);
    ledCount->addWidget(zspinbox,3,3);

    firstcontrol->setLayout(ledCount);

    QGridLayout *Rotation = new QGridLayout();
    Rotation->addWidget(sliderRotX,1,1);
    Rotation->addWidget(sliderRotY,1,2);
    Rotation->addWidget(sliderRotZ,1,3);
    Rotation->addWidget(labelXRot,2,1);
    Rotation->addWidget(labelYRot,2,2);
    Rotation->addWidget(labelZRot,2,3);
    Rotation->addWidget(xRotspinbox,3,1);
    Rotation->addWidget(yRotspinbox,3,2);
    Rotation->addWidget(zRotspinbox,3,3);

    secondcontrol->setLayout(Rotation);

    QGridLayout *ledColor = new QGridLayout();
    ledColor->addWidget(colorLabel,1,1);
    ledColor->addWidget(color,1,2);

    thirdcontrol->setLayout(ledColor);

    QGridLayout *ledSpace = new QGridLayout();
    ledSpace->addWidget(ledSpaceLabel,1,1);
    ledSpace->addWidget(ledSpacing,1,2);

    fourthcontrol->setLayout(ledSpace);

    QVBoxLayout *controlVBox = new QVBoxLayout();
    controlVBox->addWidget(firstcontrol);
    controlVBox->addWidget(secondcontrol);
    controlVBox->addWidget(thirdcontrol);
    controlVBox->addWidget(fourthcontrol);

    controlPanel->setMaximumSize(310,1200);
    controlPanel->setLayout(controlVBox);

    //QWidget *CubeWidget = new QWidget();
    //GLWidget *cube = new GLWidget();
    //cube->draw();
    QHBoxLayout *main = new QHBoxLayout();
    //GLWidget *cube = new GLWidget();
    CubeClass *cube = new CubeClass();
    main->addWidget(cube);
    main->addStretch();
    main->addWidget(controlPanel);
    QWidget *mainWidget = new QWidget();
    mainWidget->setLayout(main);
    setCentralWidget(mainWidget);
}


void
MainWindow::createActions()
{
    connect(sliderx, SIGNAL(sliderMoved(int)),xspinbox,SLOT(setValue(int)));
    connect(slidery, SIGNAL(sliderMoved(int)),yspinbox,SLOT(setValue(int)));
    connect(sliderz, SIGNAL(sliderMoved(int)),zspinbox,SLOT(setValue(int)));
    connect(sliderRotX, SIGNAL(sliderMoved(int)),xRotspinbox,SLOT(setValue(int)));
    connect(sliderRotY, SIGNAL(sliderMoved(int)),yRotspinbox,SLOT(setValue(int)));
    connect(sliderRotZ, SIGNAL(sliderMoved(int)),zRotspinbox,SLOT(setValue(int)));

}

