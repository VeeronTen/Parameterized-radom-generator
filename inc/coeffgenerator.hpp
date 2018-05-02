#pragma once

#include <vector>
#include <time.h> 
#include <stdlib.h>  
#include <memory>

#include "configuration.hpp"

class CoeffGenerator {
    public:
        CoeffGenerator();
        CoeffGenerator(std::unique_ptr<Configuration> configuration);
        virtual ~ CoeffGenerator();

        short geterate();
        
    private:
        std::unique_ptr<Configuration> configuration;
};