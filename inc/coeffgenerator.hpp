#pragma once

#include <vector>
#include <time.h> 
#include <stdlib.h>  

#include "coefficients.hpp"

class CoeffGenerator {
    public:
        CoeffGenerator();
        CoeffGenerator(Coefficients coefficients);
        virtual ~ CoeffGenerator();

        short geterate();
        
    private:
        Coefficients coefficients;
};