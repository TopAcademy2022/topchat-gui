#include "interface.h"

void Init()
{
    DIContainer::getInstance();
}

void RegisterDependencies(bool (*loginMethod)(char *, char *))
{
    DIContainer* diContainer = DIContainer::getInstance();
    diContainer->registerLogicMethods(loginMethod);
}

int CreateWindow(int& argc, char** argv)
{
    QApplication application = QApplication(argc, argv);
    MainWindow* mainWindow = new MainWindow();

    mainWindow->ChangeState(new LoginState(mainWindow));
    mainWindow->RenderState();
    mainWindow->show();

    return application.exec();
}
