QT += core
TEMPLATE = app
TARGET = minimal-opencl-example

SOURCES += \
    main.cpp

LIBS += -lOpenCL

RESOURCES += \
    main.qrc

OTHER_FILES += \
    main.cl
