CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(TabWidgetCustomPlugin)
TEMPLATE    = lib

HEADERS     = TabWidgetCustomPlugin.h
SOURCES     = TabWidgetCustomPlugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

QT += designer

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(TabWidgetCustom.pri)
