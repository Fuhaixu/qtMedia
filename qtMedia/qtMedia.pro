#-------------------------------------------------
#
# Project created by QtCreator 2019-05-26T16:43:57
#
#-------------------------------------------------

QT       += core gui
QT += multimedia
QT += multimediawidgets
QT += printsupport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtMedia
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    qmyvideowidget.cpp \
    drawdlg.cpp \
    drawwidget.cpp \
    center.cpp \
    vediodlg.cpp \
    fileeidtdlg.cpp \
    clockwidget.cpp \
    clockdlg.cpp

HEADERS  += \
    qmyvideowidget.h \
    drawdlg.h \
    drawwidget.h \
    center.h \
    vediodlg.h \
    fileeidtdlg.h \
    clockwidget.h \
    clockdlg.h

FORMS    += \
    center.ui \
    vediodlg.ui \
    fileeidtdlg.ui \
    drawdlg.ui \
    clockdlg.ui

RESOURCES += \
    res.qrc \
    res.qrc
