cmake_minimum_required(VERSION 3.5)
include_directories(.)

file(GLOB INSERTIONSORT_SRC *.cpp)

add_library(01_SelectionSort SHARED ${INSERTIONSORT_SRC})