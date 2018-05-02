#pragma once

#include <vector>

#include "coefficients.hpp"

class Configuration {
    public:
        virtual Coefficients getCoefficients() = 0;
};