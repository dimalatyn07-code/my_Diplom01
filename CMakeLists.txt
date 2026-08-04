cmake_minimum_required(VERSION 3.16)

project(MyDiplom VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем Sql в список компонентов <-- ДОБАВЛЕНО
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Multimedia MultimediaWidgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Multimedia MultimediaWidgets Sql)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(MyDiplom
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        mainwindow.ui
        icons.qrc
        introQRC.qrc
        intro.h
        intro.cpp
        sidebar.h
        sidebar.cpp
        login.h
        login.cpp
        form.ui
        AddPersonForm.ui
        addpersonform.cpp
        addpersonform.h
    )
else()
    if(ANDROID)
        add_library(MyDiplom SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(MyDiplom
            ${PROJECT_SOURCES}
            mainwindow.ui
            icons.qrc
            introQRC.qrc
        )
    endif()
endif()

# Добавляем Qt::Sql в линковку <-- ДОБАВЛЕНО
target_link_libraries(MyDiplom PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Multimedia
    Qt${QT_VERSION_MAJOR}::MultimediaWidgets
    Qt${QT_VERSION_MAJOR}::Sql
)

if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.MyDiplom)
endif()
set_target_properties(MyDiplom PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS MyDiplom
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(MyDiplom)
endif()
