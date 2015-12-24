TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ui_main.c \
    ui_tell_me_age.c \
    ui_translation.c \
    main.c \
    ui_checking_sizzling.c \
    ui_double_even_numbers.c \
    ui_array_without_nulls.c

HEADERS += \
    ui.h \
    ui_conversation.h \
    ui_tell_me_age.h \
    ui_translation.h \
    ui_check_sizzling.h \
    ui_array.h

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../lib/release/ -llib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../lib/debug/ -llib
else:unix: LIBS += -L$$OUT_PWD/../lib/ -llib

INCLUDEPATH += $$PWD/../lib
DEPENDPATH += $$PWD/../lib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/release/liblib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/debug/liblib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/release/lib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/debug/lib.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../lib/liblib.a

