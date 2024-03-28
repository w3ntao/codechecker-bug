cmake_minimum_required(VERSION 3.10)
project(template_test)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

set(CMAKE_CXX_STANDARD 17)

add_library(sum STATIC int_calculator.cpp)

add_executable(main main.cpp)

target_link_libraries(main sum)
