#ifndef LOGIN_STATE_H
#define LOGIN_STATE_H


#include "interface-state.h"

class LoginState : public InterfaceState
{
private:
    QLineEdit* _loginField;

    QLineEdit* _passwordField;

public:
    LoginState(QMainWindow* mainWindow) : InterfaceState(mainWindow) {}

    void Render() override;

signals:
    void login();

public slots:
    void loginHandle();
};

#endif // LOGIТ_STATE_H
