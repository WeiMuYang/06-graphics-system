#ifndef PAINTINGWIDGET_H
#define PAINTINGWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLContext>
#include <QOpenGLBuffer>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLVertexArrayObject>

class PaintingWidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit PaintingWidget(QWidget *parent = nullptr);

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
private:
    QOpenGLBuffer *m_vbo;             // 存储点数据
    QOpenGLVertexArrayObject *m_vao;  // VAO对象
    QOpenGLShaderProgram *m_shader;   // 渲染器程序对象
};

#endif // PAINTINGWIDGET_H
