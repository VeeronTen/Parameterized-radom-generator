#pragma once

#include <vector>

class Coefficients {
public:
    Coefficients();
    virtual ~Coefficients();

    void add(unsigned short coefficient);
    short get(unsigned short index) const;
    unsigned short size() const;
    unsigned int sum() const;

private:
    std::vector<unsigned short> coefficients;
};