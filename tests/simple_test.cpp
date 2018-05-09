#include "tests/test.hpp"
#include "configurations/simple_configuration.hpp"

#define ITEMS_COUNT 5

#define GENERATE_COUNT 100

int main( int argc, const char* argv[] ) {
    std::vector<short> coefficients;
    coefficients.push_back(10);
    coefficients.push_back(0);
    coefficients.push_back(100);
    coefficients.push_back(0);
    coefficients.push_back(1000);

    CoeffGenerator generator(std::unique_ptr<SimpleConfiguration>((new SimpleConfiguration())->way_1(coefficients)));
    GeneratorTest test(&generator, ITEMS_COUNT, GENERATE_COUNT);
}