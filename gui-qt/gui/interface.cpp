#include "interface.h"

int CreateWindow(int& argc, char** argv)
{
    QApplication application = QApplication(argc, argv);
    MainWindow* mainWindow = new MainWindow();

    mainWindow->ChangeState(new LoginState(mainWindow));
    mainWindow->RenderState();
    mainWindow->show();

    return application.exec();
}
