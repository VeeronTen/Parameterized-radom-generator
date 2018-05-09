#include "configurations/simple_configuration.hpp"

SimpleConfiguration::SimpleConfiguration() {}

SimpleConfiguration::~SimpleConfiguration() {}

SimpleConfiguration* SimpleConfiguration::way_1(std::vector<short> coefficients) {
    for (const short& value: coefficients) {
        this->coefficients.add(value);
    }
    return this;
}