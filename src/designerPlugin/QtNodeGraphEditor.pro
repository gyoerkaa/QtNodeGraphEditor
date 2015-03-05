QT          += widgets designer
CONFIG      += plugin
CONFIG      += debug_and_release
TEMPLATE    = lib

HEADERS     = qngeditorplugin.h \
              qngeditorwidget.h \
              qngnode.h \
              qngeditorview.h \
    qnggraph.h
SOURCES     = qngeditorplugin.cpp \
              qngeditorwidget.cpp \
              qngnode.cpp \
              qngeditorview.cpp \
    qnggraph.cpp

RESOURCES   = icons.qrc

TARGET = $$qtLibraryTarget($$TARGET)
target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

