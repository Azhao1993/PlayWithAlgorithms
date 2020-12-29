cmake_minimum_required(VERSION 3.5)
project(01_SelectionSort)
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
include_directories(.)

set(SOURCE_FILES main.cpp SelectionSort.h Student.h ../SortTestHelper.h)
add_executable(01_SelectionSort ${SOURCE_FILES})