#ifndef LOGIN_STATE_H
#define LOGIN_STATE_H


#include "interface-state.h"

class LoginState : public InterfaceState
{
public:
    LoginState(QMainWindow* mainWindow) : InterfaceState(mainWindow) {}

    void Render() const override;
};

#endif // LOGIТ_STATE_H
