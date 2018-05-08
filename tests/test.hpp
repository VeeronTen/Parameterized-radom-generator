#include <iostream>

#include "lib/beautyPrinter/inc/beautyprinter.hpp"
#include "coeffgenerator.hpp"
#include "configurations/linear_configuration.hpp"

class GeneratorTest {
public:
    GeneratorTest(CoeffGenerator* generator, int itemsCount, int genCount);
    virtual ~GeneratorTest();

private:
    CoeffGenerator* generator;
    int itemsCount;
    int genCount;
    std::vector<short> generatorResults;

    void prepareResults();
    void generate();
    void print();
};