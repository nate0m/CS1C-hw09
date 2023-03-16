#include "shape.h"

void printPerimeter(const Shape& s) {

    std::cout << "Perimeter: " << s.calcPerimeter() << std::endl; 
}
void printArea(const Shape& s) {

    std::cout << "Area: " << s.calcArea() << std::endl;
}
void Shape::print() const {

    std::cout << x << std::endl;
    std::cout << y << std::endl;
}

