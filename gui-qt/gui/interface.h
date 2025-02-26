#ifndef INTERFACE_H
#define INTERFACE_H


#include "gui_global.h"
#include "main-window.h"
#include "login-state.h"
#include "di-container.h"

extern "C" GUI_EXPORT void Init();

extern "C" GUI_EXPORT void RegisterDependencies(bool (*loginMethod)(char*, char*));

extern "C" GUI_EXPORT int CreateWindow(int& argc, char** argv);

#endif // INTERFACE_H
