#include <iostream>

#include "lib/beautyPrinter/inc/beautyprinter.hpp"
#include "coeffgenerator.hpp"
#include "linearconfiguration.hpp"

#define FIRST_ITEM_CHANCE 1
#define LAST_ITEM_CHANCE 1000
#define ITEMS_COUNT 10

#define GENERATE_COUNT 100

CoeffGenerator* generator;
std::vector<short> generatorResults;

void prepareResults();
void generate();
void print();

int main( int argc, const char* argv[] ) {
    generator = new CoeffGenerator(std::make_unique<LinearConfiguration>(FIRST_ITEM_CHANCE, LAST_ITEM_CHANCE, ITEMS_COUNT));
    prepareResults();
    generate();
    print();
}

void prepareResults() {
    for (int i = 0; i < ITEMS_COUNT; i++) {
        generatorResults.push_back(0);
    }
}

void generate() {
    for(int i = 0; i < GENERATE_COUNT; i++) {
        short generated = generator->geterate();
        generatorResults[generated] = generatorResults[generated] + 1;
    }
}

void print() {
    for(int i = 0; i < generatorResults.size(); i++) {
        std::cout << i << ": " << generatorResults[i] << std::endl;
    }
    BeautyPrinter::print(generatorResults);
}