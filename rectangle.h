#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {

    public:
        Rectangle() : l{0}, w{0} {}
        Rectangle(int l, int w) : l{l}, w{w} {}
        Rectangle(int x, int y, int l, int w) : Shape(x, y), l{l}, w{w} {}
         
        double calcPerimeter() const override { return 2 * (l + w); }
        double      calcArea() const override { return l * w; }
        void updateDimensions() override;



    private:
        int l;
        int w;

};

#endif
