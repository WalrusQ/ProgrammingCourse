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
    matrix_without_nulls.cpp \
    check_sizzling.cpp \
    rationalnum.cpp

HEADERS += \
    translation.h \
    tell_me_age.h \
    conversation.h \
    check_sizzling.h \
    massive_without_nulls.h \
    rationalnum.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
