QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    background.cpp \
    botton.cpp \
    brick.cpp \
    bullet.cpp \
    floor.cpp \
    gaming.cpp \
    goomba.cpp \
    main.cpp \
    mainwindow.cpp \
    mario.cpp

HEADERS += \
    background.h \
    botton.h \
    brick.h \
    bullet.h \
    floor.h \
    gaming.h \
    goomba.h \
    mainwindow.h \
    mario.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    NewMario_zh_TW.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
