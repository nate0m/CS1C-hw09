#include "triangle.h"

void Triangle::updateDimensions() {

    std::cout << "Input Length: ";
    std::cin >> a;
    std::cout << "Input Height: ";
    std::cin >> b;
    std::cout << "Input Hypotenuse: ";
    std::cin >> c;
}
void Triangle::print() const {

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}
