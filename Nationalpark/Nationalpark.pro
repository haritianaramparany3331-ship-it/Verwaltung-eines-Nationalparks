TEMPLATE = lib
CONFIG += staticlib
CONFIG += c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        hilffunktionen.cpp \
        reptil.cpp \
        saeugetier.cpp \
        spezies.cpp \
        tierliste.cpp \
        vogel.cpp

HEADERS += \
    reptil.h \
    saeugetier.h \
    spezies.h \
    tierliste.h \
    vogel.h
