QT = core
QT += network
QT += gui

greaterThan(QT_MAJOR_VERSION,4):QT+=widgets

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        clientsocket.cpp \
        cuisine.cpp \
        json_cuisine.cpp \
        main.cpp \
        myserver.cpp \
        mysocket.cpp \
        utilities.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    clientsocket.h \
    cuisine.h \
    json_cuisine.h \
    msg.h \
    myserver.h \
    mysocket.h \
    utilities.h
