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
    check_sizzling.cpp \
    rationalnum.cpp \
    array.cpp \
    double_even_numbers.cpp

HEADERS += \
    translation.h \
    tell_me_age.h \
    check_sizzling.h \
    rationalnum.h \
    array.h \
    double_even_numbers.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
