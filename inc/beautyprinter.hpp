#pragma once

#include <vector>
#include <string>
#include <iostream>

#define GRAPH_CHAR "\u25A0"
#define VIEW_WIDTH 100

class BeautyPrinter {
    public:
        static void print(std::vector<short> toPrint);

    private:
        static short findMax(std::vector<short> data);
        static std::vector<short> normilize(std::vector<short> data);
};