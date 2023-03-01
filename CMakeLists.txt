cmake_minimum_required(VERSION 3.5)

project(iasu VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)


##find_package(Qt6::Sql COMPONENTS Core REQUIRED)
##get_target_property(QtCore_location Qt6::Core LOCATION)

#find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Sql)
##find_package(Qt6 REQUIRED COMPONENTS Core Quick Sql)
##target_link_libraries(iasu Qt6::Core Qt6::Quick Qt6::Sql)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        teacher.h
        teacher.cpp
        maintableviewmodel.h
        maintableviewmodel.cpp
        filledtheadded.h
        filledtheadded.cpp
        filledtheadded.ui

        checkboxdelegate.h checkboxdelegate.cpp
        SQLiteDatabase.h
    sendmailing.h sendmailing.cpp sendmailing.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(iasu
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET iasu APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(iasu SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(iasu
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(iasu PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(iasu PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)


#добавленные

find_package(Qt6 REQUIRED COMPONENTS Sql)
target_link_libraries(iasu PRIVATE Qt6::Sql)

find_package(Qt6 COMPONENTS Network REQUIRED)
target_link_libraries(iasu PRIVATE Qt6::Network)

find_package(Qt6 REQUIRED COMPONENTS Core)
target_link_libraries(iasu PRIVATE Qt6::Core)

find_package(CURL REQUIRED)
target_include_directories(iasu PRIVATE ${CURL_INCLUDE_DIRS})

target_link_libraries(iasu PRIVATE ${CURL_LIBRARIES})


install(TARGETS iasu
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(iasu)
endif()
