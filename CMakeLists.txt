cmake_minimum_required(VERSION 3.29)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Release)

project(EncryptedNotepad VERSION 1.0.0 LANGUAGES CXX)

find_package(wxWidgets 3.2 REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})

if(WIN32)
else()
    add_executable(EncryptedNotepad src/App.cpp src/MainUI.cpp)
endif()

target_include_directories(EncryptedNotepad PRIVATE include)
target_link_libraries(EncryptedNotepad ${wxWidgets_LIBRARIES})