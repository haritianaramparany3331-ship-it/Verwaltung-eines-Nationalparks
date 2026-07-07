TEMPLATE = lib
CONFIG += staticlib
CONFIG += c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        angestellter.cpp \
        hilffunktionen.cpp \
        nationalparkgraph.cpp \
        orte.cpp \
        personalliste.cpp \
        personalstatistik.cpp \
        ranger.cpp \
        reptil.cpp \
        saeugetier.cpp \
        spezies.cpp \
        tierliste.cpp \
        tierstatistik.cpp \
        verwaltung.cpp \
        vogel.cpp \
        wege.cpp \
        wissenschaftler.cpp

HEADERS += \
    angestellter.h \
    hilffunktionen.h \
    json.hpp \
    nationalparkgraph.h \
    orte.h \
    personalliste.h \
    personalstatistik.h \
    ranger.h \
    reptil.h \
    saeugetier.h \
    spezies.h \
    tierliste.h \
    tierstatistik.h \
    verwaltung.h \
    vogel.h \
    wege.h \
    wissenschaftler.h

DISTFILES += \
    ../build/Desktop_Qt_6_9_3_MinGW_64_bit-Debug/NationalparkGUI/Personal.csv
