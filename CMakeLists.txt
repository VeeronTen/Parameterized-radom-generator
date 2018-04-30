cmake_minimum_required(VERSION 2.8)
project(CoefficientGenerator)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/beautyPrinter)

include_directories(${PROJECT_SOURCE_DIR}/inc)

add_executable(test.out 
        test.cpp 
        src/coeffgenerator.cpp
        src/linearconfiguration.cpp
)
target_link_libraries (test.out beautyPrinter)

install(TARGETS test.out DESTINATION ${PROJECT_SOURCE_DIR}/bin)