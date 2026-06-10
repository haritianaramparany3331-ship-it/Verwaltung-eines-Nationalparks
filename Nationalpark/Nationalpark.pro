TEMPLATE = lib
CONFIG += staticlib
CONFIG += c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        angestellter.cpp \
        hilffunktionen.cpp \
        personalliste.cpp \
        ranger.cpp \
        reptil.cpp \
        saeugetier.cpp \
        spezies.cpp \
        tierliste.cpp \
        verwaltung.cpp \
        vogel.cpp \
        wissenschaftler.cpp

HEADERS += \
    angestellter.h \
    hilffunktionen.h \
    json.hpp \
    personalliste.h \
    ranger.h \
    reptil.h \
    saeugetier.h \
    spezies.h \
    tierliste.h \
    verwaltung.h \
    vogel.h \
    wissenschaftler.h

DISTFILES += \
    ../build/Desktop_Qt_6_9_3_MinGW_64_bit-Debug/NationalparkGUI/Personal.csv
