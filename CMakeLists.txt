cmake_minimum_required(VERSION 3.29)
project(arrays)

set(CMAKE_CXX_STANDARD 23)

add_executable(arrays main.cpp
        arrays.h)
add_executable(arrays_and_functions arrays_and_functions.cpp)
add_executable(loops loops.cpp)
add_executable(que1 que1.cpp)
add_executable(assignment assignment.cpp)

add_executable(trials trials.cpp)
