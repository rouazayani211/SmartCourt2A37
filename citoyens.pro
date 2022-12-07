QT       += core gui
QT       += sql
QT       += multimedia
QT       += printsupport
QT       += multimediawidgets charts printsupport widgets axcontainer network
QT       +=network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++11
LIBS +="C:\Users\Mariem\Documents\qttest\libeay32.dll"
LIBS +="C:\Users\Mariem\Documents\qttest\libssl32.dll"
LIBS +="C:\Users\Mariem\Documents\qttest\ssleay32.dll"
#LIBS +="C:\Users\Mariem\anaconda3\pkgs\openssl-1.1.1k-h2bbff1b_0\Library\lib\libssl.lib"
LIBS +="E:\Qt\Qt5.9.9\Tools\QtCreator\lib\qtcreatorcdbext32\qtcreatorcdbext.lib"


# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    QrCode.cpp \
    citoyen.cpp \
    connection.cpp \
    main.cpp \
    mainwindow.cpp\
    smtp.cpp \
    exportexcelobject.cpp\
    stat_combo.cpp



HEADERS += \
    QrCode.hpp \
    citoyen.h \
    connection.h \
    mainwindow.h\
    smtp.h \
    exportexcelobject.h\
    stat_combo.h


FORMS += \
    mainwindow.ui\
    stat_combo.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
