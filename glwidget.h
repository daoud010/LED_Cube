#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QtOpenGL>
#include <QGLWidget>

class GLWidget : public QGLWidget{

  Q_OBJECT // must include this if you use Qt signals/slots


public:
    GLWidget(QWidget *parent = NULL)
        : QGLWidget(parent) {}

   // Set up the rendering context, define display lists etc.:
   void initializeGL();
   // draw the scene:
   void paintGL();
   // setup viewport, projection etc.:
   void resizeGL (int width, int height);

private:
   //void DrawCube();


};



#endif // GLWIDGET_H
