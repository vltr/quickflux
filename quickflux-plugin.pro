TEMPLATE = lib
CONFIG += qt plugin
QT += qml quick

TARGET = quickfluxplugin
DEFINES += QF_NO_STARTUP

include($$PWD/quickflux.pri)

SOURCES += \
    $$PWD/qfplugin.cpp

QML_IMPORT_PATH =
