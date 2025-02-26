#include "login-state.h"

void LoginState::Render()
{
    if(this->_mainWindow->centralWidget() == nullptr)
    {
        QWidget* centralWidget = new QWidget();
        this->_mainWindow->setCentralWidget(centralWidget);
    }

    QVBoxLayout* mainLayout = new QVBoxLayout(this->_mainWindow->centralWidget());

    QLabel* loginLabel = new QLabel("Логин:");
    this->_loginField = new QLineEdit();

    QLabel* passwordLabel = new QLabel("Пароль:");
    this->_passwordField = new QLineEdit();
    this->_passwordField->setEchoMode(QLineEdit::Password);

    QPushButton *loginButton = new QPushButton("Войти");

    mainLayout->addWidget(loginLabel);
    mainLayout->addWidget(this->_loginField);
    mainLayout->addWidget(passwordLabel);
    mainLayout->addWidget(this->_passwordField);
    mainLayout->addWidget(loginButton);

    QObject::connect(loginButton, &QPushButton::clicked, [&]() {
        this->loginHandle();
    });
}

void LoginState::loginHandle()
{
    DIContainer* diContainer = DIContainer::getInstance();
    //char* login = this->_loginField->text().toUtf8().data();
    //char* password = this->_passwordField->text().toUtf8().data();
    char* login = new char[20]();
    char* password = new char[20]();
    diContainer->invokeLogic(0, 2, login, password);
}
