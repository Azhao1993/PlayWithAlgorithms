cmake_minimum_required(VERSION 3.5)
project(02_InsertionSort)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp ../SortTestHelper.h InsertionSort.h)
add_executable(02_InsertionSort ${SOURCE_FILES})