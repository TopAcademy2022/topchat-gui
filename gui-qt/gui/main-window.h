#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "gui_global.h"
#include "interface-state.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);

    ~MainWindow();

    void ChangeState(InterfaceState* interfaceState);

    void RenderState();

private:
    InterfaceState* _interfaceState;
};

#endif // MAINWINDOW_H
