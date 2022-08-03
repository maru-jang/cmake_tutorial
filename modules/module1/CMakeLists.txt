cmake_minimum_required(VERSION 3.23)
project(module1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(MODULE1_SOURCE_FILES
        src/ClassMat.cpp
        )

add_library(module1
        ${MODULE1_SOURCE_FILES}
        )

find_package(OpenCV REQUIRED HINTS ${CMAKE_SOURCE_DIR}/thirdparty/opencv/install/lib/cmake/opencv4)

if (OpenCV_FOUND)
    message(STATUS "OpenCV Found! - ${OpenCV_DIR}")
endif()


target_include_directories(module1 PUBLIC
        include
        ${OpenCV_INCLUDE_DIRS}
        )

target_link_libraries(module1 PRIVATE
        ${OpenCV_LIBS}
        )

