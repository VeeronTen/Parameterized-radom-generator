#pragma once

#include "configuration.hpp"

class LinearConfiguration : public Configuration {
    public:
        LinearConfiguration();
        LinearConfiguration(short firstCoeff, short lastCoeff, short coeffCount);
        virtual ~LinearConfiguration();

        virtual Coefficients getCoefficients() override;
 
    private:
        short firstCoeff;
        short lastCoeff;
        short coeffCount;
};