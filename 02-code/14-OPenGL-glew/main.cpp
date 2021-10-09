#include <iostream>

#include <GL/glew.h> //这个头文件一定要在最前面包含
#include <GLFW/glfw3.h>

using namespace std;

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "出来吧，三角形", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    if(glewInit()!=GLEW_OK)
    {
        printf("GLEW Init Failed \n");
        return  0;
    }

    printf("%s\n",glGetString(GL_VERSION));//打印当前的OpenGL版本号

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);//开始绘制三角形
#if 0
        glVertex2f(-0.5f,-0.5f);    //顶点坐标 ,这里一定要填三个坐标，否则绘制不出来三角形
        glVertex2f(0.0f,0.5f);      //顶点坐标
        glVertex2f(0.5f,-0.5f);     //顶点坐标
#else
        GLfloat points[]={-0.5f,-0.5f,0.0f,0.5f,0.5f,-0.5f};
        glVertex2fv(&points[0]);
        glVertex2fv(&points[2]);
        glVertex2fv(&points[4]);
#endif
        glEnd();//绘制结束

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

