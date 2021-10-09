TEMPLATE = app
CONFIG += console c++11 opengl
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lGL -lGLU -lglut  # 必须添加

SOURCES += \
        main.cpp
