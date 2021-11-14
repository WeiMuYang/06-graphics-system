# [渲染引擎 AshEngine](./)  [img](./img)     

> ######  _标签:_   ![](https://img.shields.io/badge/技术类-yellowgreen.svg) ![](https://img.shields.io/badge/OpenGL-渲染引擎-blue.svg) [![](https://img.shields.io/badge/链接-渲染引擎Ash-brightgreen.svg)](https://github.com/afterthat97/AshEngine) [![](https://img.shields.io/badge/链接-代码文件-orange.svg)](../02-code/)        
>

## 概述  

AshEngine是一个基于OpenGL的跨平台的渲染引擎，可以使用qtcreator进行编译，通过里面的代码可以进一步的学习渲染器的相关知识，目标是自己可以写一个渲染器。 

## Linux编译问题 

```C++
QVector3D getIntersectionOfLinePlane(Line l, Plane p) {
    float t = QVector3D::dotProduct(p.n, p.v - l.st) / QVector3D::dotProduct(p.n, l.dir);  
    // 杨伟彬修改：将isnan(t) -> std::isnan(t)
    if (std::isnan(t) && log_level >= LOG_LEVEL_WARNING)
        dout << "Warning: NaN detected";
    return l.st + l.dir * t;
}
```

## 相关文档   

- [用户手册](../02-code/15-AshEngine/README.md)    
