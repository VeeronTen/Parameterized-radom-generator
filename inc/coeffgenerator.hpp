#pragma once

#include <vector>
#include <time.h> 
#include <stdlib.h>  
#include <memory>

#include "configurations/configuration.hpp"

class CoeffGenerator {
public:
    CoeffGenerator();
    CoeffGenerator(std::unique_ptr<Configuration> configuration);
    virtual ~ CoeffGenerator();

    short generate() const;
    
private:
    std::unique_ptr<Configuration> configuration;
};