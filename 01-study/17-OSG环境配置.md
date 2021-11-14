# [OSG环境配置](./)  [img](./img)     

> ######  _标签:_   ![](https://img.shields.io/badge/技术类-yellowgreen.svg) ![](https://img.shields.io/badge/OpenGL-用户手册-blue.svg) [![](https://img.shields.io/badge/链接-OSG官网-brightgreen.svg)](http://www.openscenegraph.org/) [![](https://img.shields.io/badge/链接-Github仓库-brightgreen.svg)](https://github.com/openscenegraph/OpenSceneGraph)  [![](https://img.shields.io/badge/链接-代码文件-orange.svg)](../02-code/)         
>

[toc]  

## 1 OSG简介  

OpenSceneGraph 是一个开源的高性能 3D 图形工具包，被视觉模拟、游戏、虚拟现实、科学可视化和建模等领域的应用程序开发人员使用。 它完全用标准 C++ 和 OpenGL 编写，可在所有 Windows 平台、OSX、GNU/Linux、IRIX、Solaris、HP-Ux、AIX 和 FreeBSD 操作系统上运行。 OpenSceneGraph 现已成为世界领先的场景图技术，广泛应用于视觉模拟、空间、科学、石油天然气、游戏和虚拟现实行业。

## 2 安装OpenSceneGraph  

```shell
# 1 远程克隆仓库
git clone https://github.com/openscenegraph/OpenSceneGraph.git
# 2 根据说明文档，编译安装 
mkdir build &&　cd build/
cmake ..
make
sudo make install
```

## 3 安装OSG数据文件

```shell
# 1 远程克隆仓库
git clone https://github.com/openscenegraph/OpenSceneGraph-Data.git
# 2 拷贝文档到用户的
/home/yang/Documents/OpenSceneGraph-Data
```

## 4 修改环境变量

```shell
# 1 打开/etc/profile
sudo dedit /etc/profile
# 2 在打开的文件中的最末尾加入以下语句，注意不同的操作系统可能路径不同
	# OSG 环境变量
	# 添加 OSG 库路径到系统共享库路径
	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib  
	# OSG 的一些可执行文件路径
	export PATH=$PATH:/usr/local/bin
	# OSG 的数据文件路径
	export OSG_FILE_PATH=/home/yang/Documents/OpenSceneGraph-Data
	# OSG 动态链接库路径
	export OSG_DIR=/usr/local/lib/sgPlugins-3.7.0
# 3 升级配置、或者重启电脑，建议重启生效
source /etc/profile
# 4 测试命令
osgviewer cow.osgt
osgversion
```

## 5 qt代码测试 

```C++
// 添加外部库
LIBS += -losgDB -losgWidget -losgViewer 
// main.cpp
#include <QApplication>
#include <osgDB/ReadFile>
#include <osgViewer/Viewer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    osgViewer::Viewer viewer;
    viewer.setSceneData( osgDB::readNodeFile( "cow.osg" ) );
    viewer.run();
    return a.exec();
}
```

## 6 参考资料  

[1] [OSG的基础入门](<https://www.cnblogs.com/sunliming/p/4355966.html>)  

[2] [OSG、osgQT编译及配置](https://www.dazhuanlan.com/suosuopuo/topics/1081684)  

[3] [Ubuntu环境下OSG的编译、安装与使用((vs code/QT)](https://blog.csdn.net/afgqwjgfjqwgfg/article/details/116296423)   

[4] [OSG+QGIS在QT Creator下环境配置](https://blog.csdn.net/hsc1239653453/article/details/78379856)    
