#include "coefficients.hpp"

Coefficients::Coefficients() : coefficients() {}

Coefficients::~Coefficients() {}

void Coefficients::add(unsigned short coefficient) {
    coefficients.push_back(coefficient);
}

short Coefficients::get(unsigned short index) const {
    if (index < coefficients.size()) {
        return coefficients.at(index);
    } else {
        return 0;
    }
    
}

unsigned short Coefficients::size() const {
    return coefficients.size();
}

unsigned int Coefficients::sum() const {
    int result = 0;
    for (const unsigned short& value: coefficients) {
        result+=value;
    }
    return result;
}