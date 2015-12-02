#-------------------------------------------------
#
# Project created by QtCreator 2015-12-02T21:03:40
#
#-------------------------------------------------

QT       -= core gui

TARGET = cpplib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += cpplib.cpp

HEADERS += cpplib.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
