#-------------------------------------------------
#
# Project created by QtCreator 2015-03-28T14:43:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RAWShop
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
                    Back_arrow_to_first_track_512.ico \
                    curved.ico \
                    lists8.ico \
                    opened18.ico \
                    Raw_file_format_symbol_256.ico \
                    Logo_HS.ico \
                    Storage_diskette_512.ico \
                    together.ico \
                    Zoom_1_1.ico \
                    Zoom_in_button_512.ico \
                    Zoom_out_512.ico \
                    Close_button_512.ico \
                    sync1.ico

RESOURCES += \
    rawshop.qrc



