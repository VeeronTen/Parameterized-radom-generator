#pragma once

#include <vector>

class Coefficients {
public:
    Coefficients();
    virtual ~Coefficients();

    void add(short coefficient);
    short get(short index) const;
    short size() const;
    int sum() const;

private:
    std::vector<short> coefficients;
};