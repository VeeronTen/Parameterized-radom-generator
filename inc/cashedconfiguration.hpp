#pragma once

#include <vector>

//based on configuration
//chashed configuration procces its coefficient once
//probably we will need a configuration with lazy processing in future. dont know why
class CashedConfiguration {
    public:
        virtual std::vector<short> getCoefficients() = 0;
    
    protected:
        std::vector<short> configuration;
};