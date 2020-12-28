cmake_minimum_required(VERSION 3.5)
include_directories(.)

file(GLOB SELECTIONSORT_SRC *.cpp)

add_library(01_SelectionSort SHARED ${SELECTIONSORT_SRC})