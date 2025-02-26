#ifndef GUI_GLOBAL_H
#define GUI_GLOBAL_H


#include <QtCore/qglobal.h>
#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QObjectList>
#include <QMessageBox>

#include <typeinfo>
#include <cstdarg>

#include "state-name.h"

#if defined(GUI_LIBRARY)
#define GUI_EXPORT Q_DECL_EXPORT
#else
#define GUI_EXPORT Q_DECL_IMPORT
#endif

#endif // GUI_GLOBAL_H
