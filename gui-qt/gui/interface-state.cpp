#include "interface-state.h"

InterfaceState::InterfaceState(QMainWindow* mainWindow)
{
    if(this->_mainWindow == nullptr)
    {
        this->_mainWindow = mainWindow;
    }
}
