#include "circle.h"

void Circle::updateDimensions()  {

    std::cout << "Input radius: ";
    std::cin >> r;
}
void Circle::print() const {

    std::cout << r << std::endl;
}
