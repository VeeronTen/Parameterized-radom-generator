cmake_minimum_required(VERSION 3.1)
project(CoefficientGenerator)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(lib/beautyPrinter)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/inc)


add_executable(linear_test.out 
        tests/test.cpp
        src/coeffgenerator.cpp
        src/coefficients.cpp
        src/configurations/configuration.cpp

        tests/linear_test.cpp 
        src/configurations/linear_configuration.cpp    
)

target_link_libraries (linear_test.out beautyPrinter)
# does not work
install(TARGETS linear_test.out DESTINATION ${PROJECT_SOURCE_DIR}/bin)