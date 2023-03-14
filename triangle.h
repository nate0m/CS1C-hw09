#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape {

    public:
        Triangle() : a{0}, b{0}, c{0} {}
        Triangle(int a, int b, int c) : a{a}, b{b}, c{c} {}
        Triangle(int x, int y, int a, int b, int c) : Shape(x, y), a{a}, b{b}, c{c} {}

        double calcPerimeter() const override {return a + b + c;}
        double      calcArea() const override {return (a * b) / 2;}
        void updateDimensions() override;




    private:
         int a; // length
         int b; // height
         int c; // hypotenuse



};

#endif
