#-------------------------------------------------
#
# Project created by QtCreator 2017-09-06T20:59:43
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = VkQt
TEMPLATE = lib

DEFINES += VKQT_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        vkqt.cpp \
    vkrequest.cpp \
    vkreply.cpp \
    vkmanager.cpp \
    methods/vkusers.cpp \
    methods/vkfriends.cpp \
    vkparser.cpp \
    vkauth.cpp

HEADERS += \
        vkqt.h \
        vkqt_global.h \ 
    vkrequest.h \
    vkmanager.h \
    vkreply.h \
    methods/vkusers.h \
    methods/vkfriends.h \
    vkparser.h \
    vkauth.h \
    utils.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
