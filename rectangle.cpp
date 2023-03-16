#include "rectangle.h"

void Rectangle::updateDimensions() {

    std::cout << "Input Length: ";
    std::cin >> l;
    std::cout << "Input Width: ";
    std::cin >> w;
}
void Rectangle::print() const {

    std::cout << l << std::endl;
    std::cout << w << std::endl;
} 
