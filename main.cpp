#include "mainwindow.h"
#include <QApplication>
#include "glwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //GLWidget w;
    MainWindow w;
    w.resize(1200,1200);
    w.show();


    return a.exec();
}
