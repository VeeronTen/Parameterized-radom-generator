#include "tests/test.hpp"
#include "configurations/linear_configuration.hpp"

#define FIRST_ITEM_CHANCE 1
#define LAST_ITEM_CHANCE 1000
#define ITEMS_COUNT 10

#define GENERATE_COUNT 100

int main( int argc, const char* argv[] ) {
    CoeffGenerator generator(std::unique_ptr<LinearConfiguration>((new LinearConfiguration())->way_1(FIRST_ITEM_CHANCE, LAST_ITEM_CHANCE, ITEMS_COUNT)));
    GeneratorTest test(&generator, ITEMS_COUNT, GENERATE_COUNT);
}