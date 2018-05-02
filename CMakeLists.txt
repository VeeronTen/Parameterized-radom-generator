cmake_minimum_required(VERSION 3.1)
project(CoefficientGenerator)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(lib/beautyPrinter)

include_directories(${PROJECT_SOURCE_DIR}/inc)

add_executable(test.out 
        test.cpp 
        src/coeffgenerator.cpp
        src/linearconfiguration.cpp
        src/coefficients.cpp
)

target_link_libraries (test.out beautyPrinter)

install(TARGETS test.out DESTINATION ${PROJECT_SOURCE_DIR}/bin)