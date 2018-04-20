#pragma once

#include <vector>
#include <time.h> 
#include <stdlib.h>  

class CoeffGenerator {
    public:
        CoeffGenerator();
        CoeffGenerator(std::vector<short> coefficients);
        virtual ~ CoeffGenerator();

        void setCoefficients(std::vector<short> coefficients);
        short geterate();
    private:
        std::vector<short> coefficients;
        int sum;

        void computeSum();
};