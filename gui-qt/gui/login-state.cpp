#include "login-state.h"

void LoginState::Render() const
{
    if(this->_mainWindow->centralWidget() == nullptr)
    {
        QWidget* centralWidget = new QWidget();
        this->_mainWindow->setCentralWidget(centralWidget);
    }

    QVBoxLayout* mainLayout = new QVBoxLayout(this->_mainWindow->centralWidget());

    QLabel* loginLabel = new QLabel("Логин:");
    QLineEdit* loginEdit = new QLineEdit();

    QLabel* passwordLabel = new QLabel("Пароль:");
    QLineEdit* passwordEdit = new QLineEdit();
    passwordEdit->setEchoMode(QLineEdit::Password);

    QPushButton *loginButton = new QPushButton("Войти");

    mainLayout->addWidget(loginLabel);
    mainLayout->addWidget(loginEdit);
    mainLayout->addWidget(passwordLabel);
    mainLayout->addWidget(passwordEdit);
    mainLayout->addWidget(loginButton);

    // Connect button for login logic
}
