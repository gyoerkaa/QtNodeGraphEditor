CONFIG      += designer plugin
CONFIG      += debug_and_release
TARGET      = $$qtLibraryTarget(qngeditorplugin)
TEMPLATE    = lib

HEADERS     = qngeditorplugin.h
SOURCES     = qngeditorplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(qngeditor.pri)
