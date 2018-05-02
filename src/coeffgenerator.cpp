#include "coeffgenerator.hpp"

CoeffGenerator::CoeffGenerator() : coefficients() {
    srand (time(NULL));
}

CoeffGenerator::CoeffGenerator(Coefficients coefficients) : CoeffGenerator() {
    this->coefficients = coefficients;
}

CoeffGenerator::~CoeffGenerator() {}

short CoeffGenerator::geterate() {
    short rawRandom = rand() % coefficients.sum();
    for (int i = 0; i < coefficients.size(); i++) {
        if(rawRandom < coefficients.get(i)) {
            return i;
        } else {
            rawRandom-=coefficients.get(i);
        }
    }
    return -1;
}