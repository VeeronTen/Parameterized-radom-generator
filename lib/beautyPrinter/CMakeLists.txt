cmake_minimum_required(VERSION 2.8)
project(BeautyPrinter)
set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/inc)

add_library(BeautyPrinter STATIC src/beautyprinter.cpp)