#include "coefficients.hpp"

Coefficients::Coefficients() : coefficients() {}

Coefficients::~Coefficients() {}

void Coefficients::add(short coefficient) {
    if (coefficient > 0) {
        coefficients.push_back(coefficient);
    }
}

short Coefficients::get(short index) const {
    return coefficients[index];
}

short Coefficients::size() const {
    return coefficients.size();
}

int Coefficients::sum() const {
    int result = 0;
    for (const short& value: coefficients) {
        result+=value;
    }
    return result;
}