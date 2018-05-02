#include "linearconfiguration.hpp"

LinearConfiguration::LinearConfiguration() : firstCoeff(0), lastCoeff(0), coeffCount(0) {}

LinearConfiguration::LinearConfiguration(short firstCoeff, short lastCoeff, short coeffCount) : LinearConfiguration() {
    this->firstCoeff = firstCoeff;
    this->lastCoeff = lastCoeff;
    this->coeffCount = coeffCount;
}

LinearConfiguration::~LinearConfiguration() {}

Coefficients LinearConfiguration::getCoefficients() {
    Coefficients result;

    const float coeffDiff = lastCoeff - firstCoeff;
    const float deltaBetweenCoeffs = coeffDiff / (coeffCount - 1);

    result.add(firstCoeff);
    for( int i = 1; i < coeffCount - 1; i++) {
        result.add(firstCoeff + i * deltaBetweenCoeffs);
    }
    result.add(lastCoeff);

    return result;
}