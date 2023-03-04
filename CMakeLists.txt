cmake_minimum_required(VERSION 3.5)

project(catera VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-lcurl")

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS WebEngineWidgets)


set(PROJECT_SOURCES
        catera.qrc
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        api/http.cpp
        api/http.hpp
        api/api.h
        api/arg.h
        api/accountManager.h
        api/wall.cpp
        tools/logger.h
        Maths/LongInt/LongInt.hpp
        Maths/LongInt/Conversation.cpp
        Maths/LongInt/Compare.cpp
        Maths/LongInt/Primitive.cpp
        Maths/LongInt/Sum.cpp
        Maths/LongInt/Substraction.cpp
        Maths/LongInt/Multiply.cpp
        Maths/LongInt/Division.cpp
        Maths/LongInt/Pow.cpp
        Maths/LongInt/Factorial.cpp
        Maths/LongInt/Gcd.cpp
        Maths/LongInt/Lcm.cpp
        Maths/LongInt/Isqrt.cpp
        Maths/LongInt/Icbrt.cpp
        Maths/LongInt/Random.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(catera
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET catera APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(catera SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(catera
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(catera PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(catera PRIVATE Qt${QT_VERSION_MAJOR}::WebEngineWidgets)

set_target_properties(catera PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS catera
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(catera)
endif()
