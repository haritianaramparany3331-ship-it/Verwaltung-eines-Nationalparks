QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

INCLUDEPATH += ../Nationalpark
LIBS += -L$$OUT_PWD/../Nationalpark/debug -lNationalpark
PRE_TARGETDEPS += $$OUT_PWD/../Nationalpark/debug/libNationalpark.a

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    hilffunktionenGUI.cpp \
    main.cpp \
    mainwindow.cpp \
    personbearbeiten.cpp \
    tierbearbeitendialog.cpp

HEADERS += \
    hilffunktionenGUI.h \
    mainwindow.h \
    personbearbeiten.h \
    tierbearbeitendialog.h

FORMS += \
    mainwindow.ui \
    personbearbeiten.ui \
    tierbearbeitendialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
