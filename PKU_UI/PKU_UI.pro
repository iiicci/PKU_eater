QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clientsocket.cpp \
    commentdetails.cpp \
    cuisine.cpp \
    cuisinedetails.cpp \
    json_cuisine.cpp \
    main.cpp \
    mainwindow.cpp \
    upload.cpp \
    utilities.cpp

HEADERS += \
    clientsocket.h \
    commentdetails.h \
    cuisine.h \
    cuisinedetails.h \
    json_cuisine.h \
    mainwindow.h \
    msg.h \
    upload.h \
    utilities.h

FORMS += \
    commentdetails.ui \
    cuisinedetails.ui \
    mainwindow.ui \
    upload.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
