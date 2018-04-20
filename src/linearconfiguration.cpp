#include "../inc/linearconfiguration.hpp"
#include "../inc/cashedconfiguration.hpp"
#include <iostream>

LinearConfiguration::LinearConfiguration() {}

LinearConfiguration::LinearConfiguration(short firstCoeff, short lastCoeff, short coeffCount) : LinearConfiguration(){
    float extermCoeffDiff = lastCoeff - firstCoeff;
    float deltaBetweenCoeffs = extermCoeffDiff / (coeffCount - 1);
// std::cout<<"del " << deltaBetweenCoeffs << std::endl;
    this->configuration.push_back(firstCoeff);
    for( int i = 1; i < coeffCount - 1; i++) {
        this->configuration.push_back(firstCoeff + i * deltaBetweenCoeffs);
        // std::cout<<configuration[i] << std::endl;
    }
    this->configuration.push_back(lastCoeff);
}

LinearConfiguration::~LinearConfiguration() {}

std::vector<short> LinearConfiguration::getCoefficients() {
    return this->configuration;
}
