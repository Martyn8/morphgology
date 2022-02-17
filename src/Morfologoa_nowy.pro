QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += C:\opencv\opencv\release\install\include
LIBS += C:\opencv\opencv\release\bin\libopencv_core401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_highgui401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_imgcodecs401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_imgproc401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_calib3d401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_dnn401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_features2d401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_flann401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_gapi401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_ml401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_objdetect401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_photo401.dll
LIBS += C:\opencv\opencv\release\bin\libopencv_stitching401.dll

SOURCES += \
    bottom_hat.cpp \
    domkniecie.cpp \
    dylatacja.cpp \
    erozja.cpp \
    main.cpp \
    morfologia.cpp \
    obraz.cpp \
    obrazbinarny.cpp \
    obrazoryginalny.cpp \
    obrazprzetworzony.cpp \
    operacje.cpp \
    otwarcie.cpp \
    top_hat.cpp

HEADERS += \
    bottom_hat.h \
    domkniecie.h \
    dylatacja.h \
    erozja.h \
    morfologia.h \
    obraz.h \
    obrazbinarny.h \
    obrazoryginalny.h \
    obrazprzetworzony.h \
    operacje.h \
    otwarcie.h \
    top_hat.h

FORMS += \
    morfologia.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    diagram_klas.qmodel
