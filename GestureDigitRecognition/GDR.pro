QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cpp/main.cpp \
    cpp/mainwindow.cpp \
    cpp/signin.cpp

HEADERS += \
    h/mainwindow.h \
    h/signin.h

FORMS += \
    ui/mainwindow.ui \
    ui/signin.ui

INCLUDEPATH += C:\Users\Rimo\Opencv\opencv\build\include
               C:\Users\Rimo\Opencv\opencv\build\include\opencv
               C:\Users\Rimo\Opencv\opencv\build\include\opencv2

LIBS        += C:\Users\Rimo\Opencv\opencv\build\x64\vc15\lib\*.lib
               C:\Users\Rimo\Opencv\opencv\build\x64\vc15\bin\*.dll

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Image.qrc
