#pragma once

#include "configuration.hpp"

class LinearConfiguration : public Configuration {
public:
    LinearConfiguration();
    virtual ~LinearConfiguration();

    LinearConfiguration* way_1(short firstCoeff, short lastCoeff, short coeffCount);
};