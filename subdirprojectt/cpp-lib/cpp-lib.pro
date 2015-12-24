#-------------------------------------------------
#
# Project created by QtCreator 2015-12-21T17:21:47
#
#-------------------------------------------------

QT       -= core gui

TARGET = cpp-lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    translation.cpp \
    tell_me_age.cpp \
    conversation.cpp \
    check_sizzling.cpp \
    rationalnum.cpp \
    array.cpp

HEADERS += \
    translation.h \
    tell_me_age.h \
    conversation.h \
    check_sizzling.h \
    rationalnum.h \
    array.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
