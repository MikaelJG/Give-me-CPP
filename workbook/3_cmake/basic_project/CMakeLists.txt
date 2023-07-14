cmake_minimum_required(VERSION 3.16)

project(
    CppProjectTemplate
    VERSION 1.0.0
    LANGUAGES C CXX)

add_library(Library STATIC my_lib.cpp)

add_executable(Hello main.cpp)

target_link_libraries(Hello PUBLIC Library)
