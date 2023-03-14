#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {

    public:
        Circle() : r{0} {}
        Circle(int r) : r{r} {}
        Circle(int x, int y, int r) : Shape(x, y), r{r} {}
        
        double calcPerimeter() const override { return 2 * 3.14 * r; }
        double      calcArea() const override { return 3.14 * r * r; }
        void updateDimensions() override;

    private:
        int r;
};




#endif
