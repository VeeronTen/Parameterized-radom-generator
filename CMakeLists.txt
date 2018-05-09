cmake_minimum_required(VERSION 3.1)
project(CoefficientGenerator)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(lib/beautyPrinter)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/inc)

#TESTS
add_executable(linear_test.out 
        tests/test.cpp
        src/coeffgenerator.cpp
        src/coefficients.cpp
        src/configurations/configuration.cpp

        tests/linear_test.cpp 
        src/configurations/linear_configuration.cpp    
)

add_executable(simple_test.out 
        tests/test.cpp
        src/coeffgenerator.cpp
        src/coefficients.cpp
        src/configurations/configuration.cpp

        tests/simple_test.cpp 
        src/configurations/simple_configuration.cpp    
)

target_link_libraries (linear_test.out BeautyPrinter)
target_link_libraries (simple_test.out BeautyPrinter)

# does not work
install(TARGETS linear_test.out DESTINATION ${PROJECT_SOURCE_DIR}/bin)
install(TARGETS simple_test.out DESTINATION ${PROJECT_SOURCE_DIR}/bin)
##TESTS END

add_library(ParameterizedRadomGenerator STATIC 
        src/coeffgenerator.cpp
        src/coefficients.cpp
        src/configurations/configuration.cpp

        src/configurations/linear_configuration.cpp  
        src/configurations/simple_configuration.cpp
)