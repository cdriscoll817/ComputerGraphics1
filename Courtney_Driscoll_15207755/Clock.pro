QT += core
QT -= gui

CONFIG += c++11

TARGET = Clock
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    clock.cpp \
    normalclock.cpp \
    alarmclock.cpp \
    reverseclock.cpp

DISTFILES += \
    ../../Desktop/Computer Graphics/Lab00/Calculator-QT/clock.dat

HEADERS += \
    clock.h \
    normalclock.h \
    alarmclock.h \
    reverseclock.h
