cmake_minimum_required(VERSION 3.5)
project(05_MergeSort)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp ../SortTestHelper.h MergeSort.h)
add_executable(05_MergeSort ${SOURCE_FILES})