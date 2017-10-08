#ifndef CUBECLASS_H
#define CUBECLASS_H

#include <QWidget>
#include <QtOpenGL>
#include <QGLWidget>
#include <GLUT/glut.h>


class CubeClass : public QGLWidget
{
    Q_OBJECT
public:
    //explicit
    CubeClass(QGLWidget *parent = 0);
    //void setColor(QColor *color);
    void initialize();
    void setX(float xVal);
    void setY(float yVal);
    void setZ(float zVsl);
    void setbigX(int bigXVal);
    void setbigY(int bigYVal);
    void setbigZ(int bigZVal);
    void setSpacing(int spacingVal);
    void drawCube();
    void drawBigCube();
    void updateCube();

signals:

public slots:

private:
    //QColor *cubeColor;
    float x;
    float y;
    float z;
    int spacing;
    int bigX;
    int bigY;
    int bigZ;

};

#endif // CUBECLASS_H
