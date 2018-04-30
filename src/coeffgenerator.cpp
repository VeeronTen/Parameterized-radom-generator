#include <iostream>

#include "coeffgenerator.hpp"

CoeffGenerator::CoeffGenerator() : coefficients(), sum(0) {
    srand (time(NULL));
}

CoeffGenerator::CoeffGenerator(std::vector<short> coefficients) : CoeffGenerator(){
    setCoefficients(coefficients);
    computeSum();
}

CoeffGenerator::~CoeffGenerator() {}

void CoeffGenerator::setCoefficients(std::vector<short> coefficients) {
    this->coefficients = coefficients;
}

short CoeffGenerator::geterate() {
    short rawRandom = rand() % this->sum;
    for (int i = 0; i < coefficients.size(); i++) {
        if(rawRandom < coefficients[i]) {
            return i;
        } else {
            rawRandom-=coefficients[i];
        }
    }
    return -1;
}

void CoeffGenerator::computeSum() {
    this->sum = 0;
    for (short& value: coefficients) {
        this->sum+=value;
    }
}