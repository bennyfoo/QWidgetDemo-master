QT          += xml network
LIBS        += -lQtDesignerComponents -lQtDesigner

TARGET      = designer
TEMPLATE    = app
MOC_DIR     = temp/moc
RCC_DIR     = temp/rcc
UI_DIR      = temp/ui
OBJECTS_DIR = temp/obj
DESTDIR     = $$PWD/../bin
RC_FILE     = main.rc
TRANSLATIONS = designer_zh_CN.ts

SOURCES     += main.cpp
CONFIG      += warn_off release
RESOURCES   += designer.qrc

include($$PWD/form/form.pri)
include($$PWD/qdesigner/qdesigner.pri)

INCLUDEPATH += $$PWD
INCLUDEPATH += $$PWD/form
INCLUDEPATH += $$PWD/qdesigner

INCLUDEPATH += $$PWD/lib/sdk
INCLUDEPATH += $$PWD/lib/extension
INCLUDEPATH += $$PWD/lib/shared
INCLUDEPATH += $$PWD/lib/uilib
