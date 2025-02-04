#include "interface.h"

void CreateWindow()
{
    int argc = 0;
    int& i = argc;

    char **argv = new char*[1];
    argv[0] = new char[200]();

    QApplication a(i, argv);

    MainWindow w;
    w.show();

    a.exec();
}
