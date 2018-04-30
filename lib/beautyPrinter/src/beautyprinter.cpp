#include "beautyprinter.hpp"

void BeautyPrinter::print(std::vector<short> toPrint) {
    toPrint = normilize(toPrint);
    short maxValue = findMax(toPrint);
    std::string line;


    for (short& value: toPrint){
        line.clear();
        for (int i = 0; i < value; i++) {
            line+=GRAPH_CHAR;      
        }
        std::cout << line << std::endl;
    }
}

short BeautyPrinter::findMax(std::vector<short> data) {
    short maxHeight = 0;
    for (int i = 0; i < data.size(); i++) {
        if (data[i] > maxHeight) {
            maxHeight = data[i];
        }
    }
    return maxHeight;
}

std::vector<short> BeautyPrinter::normilize(std::vector<short> data) {
    while (findMax(data) > VIEW_WIDTH) {
        short max = findMax(data);
        for(int i = 0; i < data.size(); i++) {
            data[i] = data[i] * VIEW_WIDTH / max;
        }
    }
    return data;
}