#include "main-window.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {}

MainWindow::~MainWindow() {}

void MainWindow::ChangeState(InterfaceState* interfaceState)
{
    if(this->_interfaceState == nullptr)
    {
        this->_interfaceState = interfaceState;
    }
}

void MainWindow::RenderState()
{
    this->_interfaceState->Render();
}
