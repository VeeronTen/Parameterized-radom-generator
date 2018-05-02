#pragma once

#include <vector>

class Coefficients {
    public:
        Coefficients();
        virtual ~Coefficients();

        void add(short coefficient);
        short get(short index);
        short size();
        int sum();

    private:
        std::vector<short> coefficients;
};