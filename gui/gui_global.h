#ifndef GUI_GLOBAL_H
#define GUI_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QApplication>

#if defined(GUI_LIBRARY)
#define GUI_EXPORT Q_DECL_EXPORT
#else
#define GUI_EXPORT Q_DECL_IMPORT
#endif

#endif // GUI-LIB_GLOBAL_H
