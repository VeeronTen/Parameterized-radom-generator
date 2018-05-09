#pragma once

#include <utility> 

#include "configuration.hpp"

class SimpleConfiguration : public Configuration {
public:
    SimpleConfiguration();
    virtual ~SimpleConfiguration();

    SimpleConfiguration* way_1(std::vector<unsigned short> coefficients);
};