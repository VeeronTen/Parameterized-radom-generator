#include "configurations/simple_configuration.hpp"

SimpleConfiguration::SimpleConfiguration() {}

SimpleConfiguration::~SimpleConfiguration() {}

SimpleConfiguration* SimpleConfiguration::way_1(std::vector<unsigned short> coefficients) {
    for (const unsigned short& value: coefficients) {
        this->coefficients.add(value);
    }
    return this;
}