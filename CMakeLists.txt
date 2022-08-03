cmake_minimum_required(VERSION 3.23)
project(hello_cmake LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON) # c++14 넘어가는 기능들 빌드가 되지않도록 제한하는 기능. 없으면 warning만 뜨고 빌드 돼.

add_subdirectory(modules)

#add_executable(hello_cmake examples/main.cpp modules/module1/include/module1/ClassMat.hpp modules/module1/src/ClassMat.cpp)
add_executable(exec_module1 examples/main.cpp)
target_link_libraries(exec_module1 PRIVATE
        module1)

add_executable(exec_module1_module2 examples/exec_module1_module2.cpp)
target_link_libraries(exec_module1_module2 PRIVATE
        module1
        module2)

add_executable(exec_module3 examples/exec_module3.cpp)
target_link_libraries(exec_module3 PRIVATE
        module3)