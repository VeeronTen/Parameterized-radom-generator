#include "configurations/configuration.hpp"

Configuration::Configuration() : coefficients() {}

Configuration::~Configuration() {}

const Coefficients Configuration::getCoefficients() {
    return coefficients;
}