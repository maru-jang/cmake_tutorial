cmake_minimum_required(VERSION 3.23)
project(module2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(MODULE2_SOURCE_FILES
        src/ClassEigenMat.cpp
        )

add_library(module2
        ${MODULE2_SOURCE_FILES}
        )

find_package(Eigen3 REQUIRED HINTS ${CMAKE_SOURCE_DIR}/thirdparty/Eigen3/install/share/eigen3/cmake)

if (Eigen3_FOUND)
    message(STATUS "Eigen3 Found! - ${Eigen3_DIR}")

    set(Eigen3_LIBS Eigen3::Eigen) #wraping
endif()


target_include_directories(module2 PUBLIC
        include
        ${Eigen3_INCLUDE_DIRS}
        )

target_link_libraries(module2 PUBLIC
        ${Eigen3_LIBS}
        )

