TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ../../lsMisc/CommandLineParser.cpp \
    ../../lsMisc/UrlEncode.cpp \
    ../../lsMisc/UTF16toUTF8.cpp

HEADERS += \
    ../../lsMisc/CommandLineParser.h \
    stdafx.h \
    ../../lsMisc/UrlEncode.h \
    ../../lsMisc/UTF16toUTF8.h
