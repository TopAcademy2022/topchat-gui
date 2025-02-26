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

signals:
    void moveNextState(StateName stateName);

public slots:
    void moveNextStateHandle(StateName stateName);
};

#endif // MAINWINDOW_H
