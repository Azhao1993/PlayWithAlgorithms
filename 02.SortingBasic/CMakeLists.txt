cmake_minimum_required(VERSION 3.5)
project(02_SortBasic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp SortTestHelper)
#add_executable(01_SelectionSort ${SOURCE_FILES})
add_subdirectory(01.SelectionSort)
add_subdirectory(02.InsertionSort)