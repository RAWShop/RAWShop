#-------------------------------------------------
#
# Project created by QtCreator 2015-03-28T14:43:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Datei_oeffnen
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clickablelabel.cpp \
    MyRAW.cpp \
    QDoubleValidator_StandardNotation.cpp \
    myQPixmap.cpp \
    about_rawshop.cpp

HEADERS  += mainwindow.h \
    MyRAW.h \
    QDoubleValidator_StandardNotation.h \
    clickablelabel.h \
    myQPixmap.h \
    about_rawshop.h

FORMS    += \
    mainwindow.ui \
       about_rawshop.ui






LIBS += -lws2_32

unix|win32: LIBS += -L$$PWD/../../../../../LibRaw/LibRaw-0.16.2/lib/ -llibraw

INCLUDEPATH += $$PWD/../../../../../LibRaw/LibRaw-0.16.2/libraw
DEPENDPATH += $$PWD/../../../../../LibRaw/LibRaw-0.16.2/libraw

win32:RC_ICONS += rawshop_ico.ico \
                    opened18.ico \
                    cd12.ico \
                    Close_button_512.ico \
                    sync1.ico

RESOURCES += \
    rawshop.qrc


