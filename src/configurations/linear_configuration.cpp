#include "configurations/linear_configuration.hpp"

LinearConfiguration::LinearConfiguration() {}

LinearConfiguration::~LinearConfiguration() {}

LinearConfiguration* LinearConfiguration::way_1(unsigned short firstCoeff, unsigned short lastCoeff, unsigned short coeffCount) {
    const float coeffDiff = lastCoeff - firstCoeff;
    const float deltaBetweenCoeffs = coeffDiff / (coeffCount - 1);

    coefficients.add(firstCoeff);
    for( int i = 1; i < coeffCount - 1; i++) {
        coefficients.add(firstCoeff + i * deltaBetweenCoeffs);
    }
    coefficients.add(lastCoeff);

    return this;
}