# [图形系统学](./)<br>[Study](./01-study)     [img](./01-study/img)   [code](./02-code)    [repo](./03-repo)       

>###   1  <a href="#Wlroots">Wlroots</a>  ：Wlroots以及新窗管相关的文档整理，架构，API实现等。
>
>### 2  <a href="#Vulkan">Vulkan</a>  ：Vulkan的用法，配置和开发等。
>
>###    3  <a href="#OpenGL">OpenGL</a>：OpenGL的用法，开发，渲染等。
>
>### 4 <a href="#Graphics">Graphics</a> ：计算机图形学相关内容，CPU和GPU的工作原理，图形处理底层实现。

##### _tips:_

以**OpenGL学习官网**  ，为学习主线，OpenGL编程指南作为学习的一个进阶 。

1. 以OpenGL为主，最终的方向是Vulkan   
2. 为了UOS的操作系统底层驱动    
3. 考虑到以后的开发平台是Linux，开发平台建议用qtcreator    
4. 未来研究方向：wlroots和动画效果、vulkan、光线追踪    
5. 命名规则：   
	- 01-OpenGL-XXX.md   
	- 02-Vulkan-XXX.md   
	- 03-光线追踪-XXX.md    
	- 04-wlroots-XXX.md    
6. 若没整理的需要在文档名字的末尾加上`-nf`  
7. 有想法的话，以文件名的方式先保存下来，以便后续整理   
8. 对于不想更新的目录可以在末尾加上：`-ign`   
9. 对于不想更新的文件可以在末尾加上：`-ign`     


### [1 学习书籍](./00-book)    

#### 1.1 <a name="Graphics"></a>[计算机图形学](./00-book/01-computer-graphics)

- [计算机图形学原理及实践](./00-book/01-computer-graphics/01-计算机图形学原理及实践.md)    
- [计算机图形学-官网](http://cgpp.net/about.xml)  
- [计算机图形学.pdf](./00-book/01-computer-graphics/02-计算机图形学.pdf)

#### 1.2  <a name="OpenGL"></a>[OpenGL书籍](./00-book/02-opengl)   

序号|本地位置|书籍|代码
:-:|:-:|-|-
1|[学习官网](./00-book/02-opengl/01-OpenGL-official-website)|[OpenGL学习官网-英文](https://learnopengl.com/)<br>[OpenGL学习官网-中文](https://learnopengl-cn.github.io/intro/)  |[OpenGL学习官网-code-远程](https://github.com/JoeyDeVries/LearnOpenGL)<br>[OpenGL学习官网-code-本地](./00-book/02-opengl/01-OpenGL-official-website/code/LearnOpenGL)
2|[编程指南](./00-book/02-opengl/03-OpenGL-programming-guide-9th)|[OpenGL编程指南-中文-第8版](./00-book/02-opengl/03-OpenGL-programming-guide-9th/01-OpenGL编程指南(第8版).pdf)|[OpenGL编程指南](./00-book/02-opengl/03-OpenGL-programming-guide-9th/code)
3|[OpenGL教程](./00-book/02-opengl/02-OpenGL-tutorial)|[OpenGL教程-OpenGL-Tutorial](http://www.opengl-tutorial.org/cn/beginners-tutorials/tutorial-1-opening-a-window/)|[OpenGL教程-code-远程](https://codeload.github.com/opengl-tutorials/ogl/zip/master)<br>[OpenGL教程-code-本地](./00-book/02-opengl/02-OpenGL-tutorial/code)  
4|[OpenGL着色语言](./00-book/02-opengl/04-OpenGL-shade-language)|[OpenGL着色语言-book](./00-book/02-opengl/04-OpenGL-shade-language/01-OpenGL-shade-language.pdf)|[OpenGL着色语言-远程](https://github.com/daw42/glslcookbook)<br>[OpenGL着色语言-code-本地](./00-book/02-opengl/04-OpenGL-shade-language/code/glslcookbook)   

#### 1.3 <a name="Vulkan"></a>[Vulkan书籍](./00-book/03-vulkan)   

序号|本地位置|书籍|代码  
:-:|:-:|:-:|-
1|[Vulkan学习指南](./00-book/03-vulkan/01-Vulkan-study-guide)| [Vulkan学习指南-book](./00-book/03-vulkan/01-Vulkan-study-guide/vulkan-study-guide.md) |[Vulkan学习指南-code](./00-book/03-vulkan/01-Vulkan-study-guide/code)<br>[Vulkan学习指南-插图](./00-book/03-vulkan/01-Vulkan-study-guide/graphics)
2|[Vulkan编程指南](./00-book/03-vulkan/02-Vulkan-programming-guide) |[Vulkan编程指南-book](./00-book/03-vulkan/02-Vulkan-programming-guide/Vulkan编程指南.pdf) |暂无
3|[Vulkan官网](https://vulkan.lunarg.com/doc/sdk/1.2.176.1/windows/samples_index.html) |[Vulkan官网-Win教程](./00-book/03-vulkan/03-Vulkan-official-website/VulkanSDK-Windows-Doc/sdk-1.2.176.1/tutorial/html/index.html)<br>[Vulkan官网-Linux教程](./00-book/03-vulkan/03-Vulkan-official-website\VulkanSDK-Linux-Doc\sdk-1.2.176.1\tutorial\html/index.html) |[Vulkan官网-repo](https://github.com/LunarG/VulkanSamples)  <br>[Vulkan官网-本地](./00-book/03-vulkan/03-Vulkan-official-website/code/VulkanSamples) 
4|[谭芳分享](https://shimo.im/docs/Qk6PT8v6QRwHhyJ3/read)|-|gitlab
5|[亮哥分享教程](https://vulkan-tutorial.com/) |待补充|待补充



### 1.4 <a name="Wlroots"></a>[Wlroots](./00-book/04-wlroots)    
序号|本地位置|书籍| 代码
:-:|-|-|-
1|[wlroots白皮书](./00-book/04-wlroots/01-wlroots-白皮书.pdf) | [wlroots白皮书-pdf](./00-book/04-wlroots/01-wlroots-白皮书.pdf) |https://github.com/swaywm/wlroots  
2| [利用wlroots写一个窗口的思考](./00-book/04-wlroots/03-wayland-window-manager-with-wlroots) |[Thoughts on writing a wayland window manager with wlroots](http://inclem.net/2021/04/17/wayland/writing_a_wayland_compositor_with_wlroots/)|
3|[新窗管开发计划以及需求](https://onlyoffice.uniontech.com/Products/Files/DocEditor.aspx?fileid=48736) |[新窗管任务分配](https://onlyoffice.uniontech.com/Products/Files/DocEditor.aspx?fileid=48736)|[新窗管会议](https://onlyoffice.uniontech.com/Products/Files/DocEditor.aspx?fileid=48736)  

