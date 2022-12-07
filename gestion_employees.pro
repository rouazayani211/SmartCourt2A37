#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#
#-------------------------------------------------

QT       += core gui sql
QT       +=printsupport
QT       +=charts
QT       += core gui  serialport
QT       += sql
QT       += multimedia
QT       += printsupport
QT       += multimediawidgets charts printsupport widgets axcontainer network
QT       +=network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets axcontainer


TARGET = Atelier_Connexion
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    QrCode.cpp \
    aff.cpp \
    affaire.cpp \
    arduino.cpp \
    arduinoa.cpp \
    avoc.cpp \
    avocat.cpp \
    calendrier.cpp \
    camera.cpp \
    cit.cpp \
    citoyen.cpp \
    dialog_in.cpp \
    employes.cpp \
    empp.cpp \
    enregistrement.cpp \
    exportexcelobjec.cpp \
    gerer_salles.cpp \
        main.cpp \
        mainwindow.cpp \
    connection.cpp \
    notepad.cpp \
    salles.cpp \
    smtp.cpp \
    stat_av.cpp \
    stat_combo.cpp

HEADERS += \
    QrCode.hpp \
    aff.h \
    affaire.h \
    arduino.h \
    arduinoa.h \
    avoc.h \
    avocat.h \
    calendrier.h \
    camera.h \
    cit.h \
    citoyen.h \
    dialog_in.h \
    employes.h \
    empp.h \
    enregistrement.h \
    exportexcelobjec.h \
    gerer_salles.h \
        mainwindow.h \
    connection.h \
    notepad.h \
    salles.h \
    smtp.h \
    stat_av.h \
    stat_combo.h \
    webaxwidget.h

FORMS += \
        aff.ui \
        avoc.ui \
        camera.ui \
        cit.ui \
        dialog_in.ui \
        empp.ui \
        gerer_salles.ui \
        mainwindow.ui \
        notepad.ui \
        stat_av.ui \
        stat_combo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
