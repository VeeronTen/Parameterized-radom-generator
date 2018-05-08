#include "coeffgenerator.hpp"

CoeffGenerator::CoeffGenerator() : configuration(nullptr) {
    srand (time(NULL));
}

CoeffGenerator::CoeffGenerator(std::unique_ptr<Configuration> configuration) : CoeffGenerator() {
    this->configuration = std::move(configuration);
}

CoeffGenerator::~CoeffGenerator() {}

short CoeffGenerator::generate() const {
    const Coefficients coefficients = configuration->getCoefficients();

    if (coefficients.sum() == 0) {
        return -1;
    }

    short rawRandom = rand() % coefficients.sum();
    for (int i = 0; i < coefficients.size(); i++) {
        if(rawRandom < coefficients.get(i)) {
            return i;
        } else {
            rawRandom-=coefficients.get(i);
        }
    }
}