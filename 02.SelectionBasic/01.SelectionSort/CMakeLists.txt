cmake_minimum_required(VERSION 3.5)
project(01_SelectionSort)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp Student.h SortTestHelper)
add_executable(01_SelectionSort ${SOURCE_FILES})