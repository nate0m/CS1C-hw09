#include "shape.h"
#include "rectangle.h"
#include "triangle.h"


int main() {

    Triangle right(1, 1, 3, 4, 5);
    Rectangle rect(6, 6, 4, 2);

    printPerimeter(right);
    printArea(right);

    std::cout << std::endl;

    printPerimeter(rect);
    printArea(rect);


    




    return 0;
}


