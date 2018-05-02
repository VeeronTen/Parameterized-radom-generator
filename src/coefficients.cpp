#include "coefficients.hpp"

Coefficients::Coefficients() : coefficients() {}

Coefficients::~Coefficients() {}

void Coefficients::add(short coefficient) {
    coefficients.push_back(coefficient);
}

short Coefficients::get(short index) {
    return coefficients[index];
}

short Coefficients::size() {
    return coefficients.size();
}

int Coefficients::sum() {
    int result = 0;
    for (short& value: coefficients) {
        result+=value;
    }
    return result;
}