#-------------------------------------------------
#
# Project created by QtCreator 2011-11-01T09:03:44
#
#-------------------------------------------------

QT       += core gui

TARGET = greg
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    configurationdialog.cpp \
    savedialog.cpp \
    designerviewwindow.cpp \
    versioncontrolplugin.cpp \
    viewtreewindow.cpp \
    statetreewindow.cpp \
    variableswindow.cpp \
    Module.cpp \
    Serializable.cpp \
    DObject.cpp \
    DataEntity.cpp \
    BinaryDataEntity.cpp \
    SqlDataEntity.cpp \
    GregPlugin.cpp \
    ConfigurationStructure.cpp \
    BinarySavePlugin.cpp \
    ProjectSettingsDlg.cpp

HEADERS  += mainwindow.h \
    configurationdialog.h \
    savedialog.h \
    designerviewwindow.h \
    versioncontrolplugin.h \
    viewtreewindow.h \
    statetreewindow.h \
    variableswindow.h \
    Module.h \
    Serializable.h \
    DObject.h \
    DataEntity.h \
    BinaryDataEntity.h \
    SqlDataEntity.h \
    GregPlugin.h \
    ConfigurationStructure.h \
    BinarySavePlugin.h \
    ProjectSettingsDlg.h

FORMS    += mainwindow.ui \
    configurationdialog.ui \
    savedialog.ui \
    designerviewwindow.ui \
    viewtreewindow.ui \
    statetreewindow.ui \
    variableswindow.ui \
    ProjectSettingsDlg.ui

OTHER_FILES +=
