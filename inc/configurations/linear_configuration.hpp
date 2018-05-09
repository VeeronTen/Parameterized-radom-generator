#pragma once

#include "configuration.hpp"

class LinearConfiguration : public Configuration {
public:
    LinearConfiguration();
    virtual ~LinearConfiguration();

    LinearConfiguration* way_1(unsigned short firstCoeff, unsigned short lastCoeff, unsigned short coeffCount);
};