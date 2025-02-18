#ifndef INTERFACE_STATE_H
#define INTERFACE_STATE_H


#include "gui_global.h"

class InterfaceState
{
public:
    InterfaceState(QMainWindow* mainWindow);

    virtual void Render() const = 0;

protected:
    QMainWindow* _mainWindow;
};

#endif // INTERFACE_STATE_H
