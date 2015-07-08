#-------------------------------------------------
#
# Project created by QtCreator 2015-07-08T18:58:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RAWShop
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clickablelabel.cpp \
    myQPixmap.cpp \
    MyRAW.cpp \
    QDoubleValidator_StandardNotation.cpp \
    about_rawshop.cpp

HEADERS  += mainwindow.h \
    clickablelabel.h \
    myQPixmap.h \
    MyRAW.h \
    QDoubleValidator_StandardNotation.h \
    about_rawshop.h

FORMS    += mainwindow.ui \
    about_rawshop.ui

win32: RC_ICONS += rawshop_ico.ico \
                    Back_arrow_to_first_track_512.ico \
                    Close_button_512.ico \
                    curved.ico \
                    HAB_Logo.ico \
                    lists8.ico \
                    Logo_HS_orig.ico \
                    opened18.ico \
                    Raw_file_format_symbol_256.ico \
                    Storage_diskette_512.ico \
                    sync1.ico \
                    together.ico \
                    Zoom_1_1.ico \
                    Zoom_in_button_512.ico \
                    Zoom_out_512.ico

RESOURCES += \
    icons.qrc

LIBS += -lws2_32

unix|win32: LIBS += -L$$PWD/../../../../../LibRaw/LibRaw-0.16.2/lib/ -llibraw

INCLUDEPATH += $$PWD/../../../../../LibRaw/LibRaw-0.16.2/libraw
DEPENDPATH += $$PWD/../../../../../LibRaw/LibRaw-0.16.2/libraw


