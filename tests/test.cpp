#include "test.hpp"

GeneratorTest::GeneratorTest(CoeffGenerator* generator, int itemsCount, int genCount) : generator(generator), itemsCount(itemsCount), genCount(genCount), generatorResults() {
    prepareResults();
    generate();
    print();
}

GeneratorTest::~GeneratorTest() {}

void GeneratorTest::prepareResults() {
    for (int i = 0; i < itemsCount; i++) {
        generatorResults.push_back(0);
    }
}

void GeneratorTest::generate() {
    for(int i = 0; i < genCount; i++) {
        short generated = generator->generate();
        if (-1 < generated) {
            generatorResults[generated] = generatorResults[generated] + 1;
        } else {
            std::cout << generated << " was generated" << std::endl;
        }     
    }
}

void GeneratorTest::print() {
    for(int i = 0; i < generatorResults.size(); i++) {
        std::cout << i << ": " << generatorResults[i] << std::endl;
    }
    BeautyPrinter::print(generatorResults);
}