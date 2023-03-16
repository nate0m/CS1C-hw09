#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {

    public:
        Circle() : r{0} {}//POST - circle object created and initialized to 0
        Circle(int r) : r{r} {}//PRE - r = radius
                               //POST - circle objected initialized to r radius
        Circle(int x, int y, int r) : Shape(x, y), r{r} {}//PRE - r = radius | x = x coordinate | y = y coordinate
                                                          //POST - circle object initialized to r radius at x,y coordinate location

        void print() const;
        
        double calcPerimeter() const override { return 2 * 3.14 * r; }
        double      calcArea() const override { return 3.14 * r * r; }
        void updateDimensions() override;

    private:
        int r;
};




#endif
