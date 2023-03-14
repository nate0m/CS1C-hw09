#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {

    public:
        Shape() : x{0}, y{0} {}
        Shape(int x, int y) : x{x}, y{y} {}

        virtual void move(int mX, int mY) { x = mX; y = mY; } // does not make since for this to be a virtual function because the implementation would be the same across derived classes. Simply changing x and y values.
        virtual void print(); // need to implement 

        virtual double calcPerimeter() const = 0;
        virtual double calcArea() const = 0;
        virtual void updateDimensions() = 0;



    private:
        int x;
        int y;
};

void printPerimeter(const Shape& s);
void printArea(const Shape& s);







#endif
