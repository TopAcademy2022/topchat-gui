#include "interface-state.h"

InterfaceState::InterfaceState(QMainWindow* mainWindow)
{
    if(mainWindow != nullptr)
    {
        this->_mainWindow = mainWindow;
    }
}
