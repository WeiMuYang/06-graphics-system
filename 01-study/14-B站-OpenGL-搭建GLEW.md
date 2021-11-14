# [OpenGL环境搭建](./)-GLEW  [img](./img)     

> ######  _标签:_   ![](https://img.shields.io/badge/技术类-yellowgreen.svg) ![](https://img.shields.io/badge/OpenGL-B站视频-blue.svg) [![](https://img.shields.io/badge/链接-环境搭建-brightgreen.svg)](https://www.bilibili.com/video/BV1uB4y1u7eB?p=5) [![](https://img.shields.io/badge/链接-代码文件-orange.svg)](../02-code/)     
>

## 概述  

最近看到B 站上的有对OpenGL 的讲解，感觉比自己到用户手册更加容易上手，因此，将他的教程走一遍，但是视频使用的WIN10系统，在现实使用过程中，很难使用win10，本文先使用UOS搭建环境，后面将部分内容进行修改和整理。 

## 环境配置  

- 安装glew：`sudo apt-get install libglew-dev glew-utils`  
- glew.h：/usr/include/GL  

## 基本用法 

需要在pro文件中添加：

```shell
LIBS += -lGLEW -lglfw3 -ldl
```

>#### 注意事项 
>
>glew（The OpenGL Extension Wrangler Library）是对底层OpenGL接口的封装，可以让你的代码跨平台。glad与glew作用相同，可以看作它的升级版。
>
>glut（OpenGL Utility Toolkit）主要用于创建OpenGL上下文、接收一些鼠标键盘事件等等。  
>
>glfw（Graphics Library Framework）是Freeglut升级版，作用基本一样。  
>
>通常来说glad和glfw配合使用，比如LearnOpenGL网站就是。  
>
>glew和Freeglut配合使用，比如OpenGL红宝书上面的例子。  

## 参考链接

- [Ubuntu下GLFW和GLEW编译错误解决总结](https://blog.csdn.net/gaiyonghuming110/article/details/103471072)   
- [OpenGL学习记录(003)-Qt5.14.2配置GLEW开发环境](https://blog.csdn.net/yxyy3604/article/details/116116409)

