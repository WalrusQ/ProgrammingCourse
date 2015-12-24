TEMPLATE = subdirs

app.depends = lib
test.depends = lib
cpptest.depends = cpp-lib

SUBDIRS += \
    app \
    lib \
    test \
    cppapp \
    cpp-lib \
    cpptest



