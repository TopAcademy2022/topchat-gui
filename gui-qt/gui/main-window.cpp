#include "main-window.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->_interfaceState = nullptr;
}

MainWindow::~MainWindow() {}

void MainWindow::ChangeState(InterfaceState* interfaceState)
{
    if(interfaceState != nullptr)
    {
        if(this->_interfaceState == nullptr)
        {
            this->_interfaceState = interfaceState;
        }
    }
}

void MainWindow::RenderState()
{
    if(this->_interfaceState != nullptr)
    {
        this->_interfaceState->Render();
    }
}

void MainWindow::moveNextStateHandle(StateName stateName)
{
    switch(stateName)
    {
        case StateName::Login:
            //this->ChangeState();
            break;
    }
}
