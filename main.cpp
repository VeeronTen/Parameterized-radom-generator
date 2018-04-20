//#include <stdio.h>
#include <iostream>

#include "inc/beautyprinter.hpp"
#include "inc/coeffgenerator.hpp"
#include "inc/linearconfiguration.hpp"

#define GENERATE_COUNT 100
#define GENERATE_ITEMS 10

int main( int argc, const char* argv[] ) {
    LinearConfiguration config(1, 1000, GENERATE_ITEMS);
    CoeffGenerator generator(config.getCoefficients());

    std::vector<short> generatorResults;
    for (int i = 0; i < GENERATE_ITEMS; i++) {
        generatorResults.push_back(0);
    }
    for(int i = 0; i < GENERATE_COUNT; i++) {
        short generated = generator.geterate();
        generatorResults[generated] = generatorResults[generated] + 1;
    }
    for(int i = 0; i < generatorResults.size(); i++) {
        std::cout << i << ": " << generatorResults[i] << std::endl;
    }

    BeautyPrinter::print(generatorResults);

}