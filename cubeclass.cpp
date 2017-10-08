#include "cubeclass.h"

CubeClass::CubeClass(QGLWidget *parent) :
    QGLWidget(parent)
{
    initialize();
    setX(1.0);
    setY(1.0);
    setZ(1.0);
    setbigX(4);
    setbigY(4);
    setbigZ(4);
    setSpacing(1);
    drawCube();
    //drawBigCube();
}

void
CubeClass::initialize()
{
    glEnable(GL_DEPTH_TEST);
}

void
CubeClass::setX(float xVal)
{
    x = xVal;
}

void
CubeClass::setY(float yVal)
{
    y = yVal;
}

void
CubeClass::setZ(float zVal)
{
    z = zVal;
}

void
CubeClass::setbigX(int bigXVal)
{
    bigX = bigXVal;
}

void
CubeClass::setbigY(int bigYVal)
{
    bigY = bigYVal;
}

void
CubeClass::setbigZ(int bigZVal)
{
    bigZ = bigZVal;
}

void
CubeClass::setSpacing(int spacingVal)
{
    spacing = spacingVal;
}

void
CubeClass::drawCube()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1.0, 1.0, -1.0, 1.0, 5.0, 30.0);
    //glMatrixMode( GL_MODELVIEW );

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glTranslatef(0.0f,0.0f,-20.0f); //move along z-axis
        glRotatef(30.0,0.0,1.0,0.0); //rotate 30 degress around y-axis
        glRotatef(60.0,1.0,0.0,0.0); //rotate 15 degress around x-axis


    /* create 3D-Cube */
    glBegin(GL_LINE_STRIP);


    glColor3f(0.0,0.0,0.0);

        glVertex3f(-x,-y,z);
        glVertex3f(x,-y,z);
        glVertex3f(x,y,z);
        glVertex3f(-x,y,z);
        glVertex3f(-x,-y,z);
        glVertex3f(-x,-y,-z);
        glVertex3f(x,-y,-z);
        glVertex3f(x,y,-z);
        glVertex3f(-x,y,-z);
        glVertex3f(-x,-y,-z);
        glVertex3f(-x,y,-z);
        glVertex3f(-x,y,z);
        glVertex3f(x,y,z);
        glVertex3f(x,y,-z);
        glVertex3f(x,-y,-z);
        glVertex3f(x,-y,z);
    glEnd();
    glFlush();
}


void
CubeClass::drawBigCube()
{}

void
CubeClass::updateCube()
{}
