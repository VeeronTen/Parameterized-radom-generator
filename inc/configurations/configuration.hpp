#pragma once

#include <vector>

#include "coefficients.hpp"

class Configuration {
public:
    Configuration();
    virtual ~Configuration();

    const Coefficients getCoefficients();

protected:
    Coefficients coefficients;
};