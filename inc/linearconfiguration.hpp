#pragma once

#include "cashedconfiguration.hpp"

class LinearConfiguration : public CashedConfiguration {
    public:
        LinearConfiguration();
        LinearConfiguration(short firstCoeff, short lastCoeff, short coeffCount);
        virtual ~LinearConfiguration();

        virtual std::vector<short> getCoefficients() override;
};