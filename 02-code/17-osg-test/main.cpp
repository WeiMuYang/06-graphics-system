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
