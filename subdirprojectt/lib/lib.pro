#-------------------------------------------------
#
# Project created by QtCreator 2015-11-03T20:41:16
#
#-------------------------------------------------

QT       -= core gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    conversation.c \
    matrix.c \
    tell_me_age.c \
    translation.c \
    check_sizzling.c

HEADERS += \
    conversation.h \
    matrix.h \
    tell_me_age.h \
    translation.h \
    check_slizzing.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
