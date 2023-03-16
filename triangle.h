#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"
#include <cmath>

class Triangle : public Shape {

    public:
        Triangle() : a{0}, b{0}, c{0} {} //POST - triangle object created and initialized to 0
        Triangle(int a, int b, int c) : a{a}, b{b}, c{c} {} //PRE - a = side one length | b = side two length | c = side three length
                                                            //POST - triangle initialized to a,b,c PDM 
        Triangle(int x, int y, int a, int b, int c) : Shape(x, y), a{a}, b{b}, c{c} {}//PRE - a = side one length | b = side two length | c = side three length | x = x coordinate | y = y coordinate
                                                                                      //POST - triangle initialized to a,b,c for sides and x,y for coordinate location

        void print() const;

        double calcPerimeter() const override {return a + b + c;}
        double      calcArea() const override { double s = calcPerimeter(); return std::sqrt(s * (s - a) * (s - b) * (s - c)); }
        void updateDimensions() override;

    private:
         int a; // length
         int b; // height
         int c; // hypotenuse
};

#endif
