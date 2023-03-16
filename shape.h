#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {

    public:
        Shape() : x{0}, y{0} {} //POST - shape object created
        Shape(int x, int y) : x{x}, y{y} {} //PRE - x = x coordinate | y = y coordinate
                                            //POST - shape object created at x,y coordinate

        virtual void move(int mX, int mY) { x = mX; y = mY; } // does not make since for this to be a virtual function because the implementation would be the same across derived classes. Simply changing x and y values.
                                                              //PRE - mX = new x coordinate | mY = new y coordinate
                                                              //POST - shape object moved to mX,mY
        void print() const; //PRE - shape object invoker
                            //POST - shape PDM printed to terminal

        virtual double calcPerimeter() const = 0; //PRE - shape object PDM intialized
                                                  //POST - perimeter of shape returned as double 
        virtual double calcArea() const = 0; //PRE - shape object PDM initialized
                                             //POST - area of shape returned as double
        virtual void updateDimensions() = 0; //POST - changes shape PDM based on user input

    private:
        int x;
        int y;
};

void printPerimeter(const Shape& s); //PRE - s = shape to be printed
                                     //POST - perimeter of shape is printed
void printArea(const Shape& s); //PRE - s = shape to be printed
                                //POST - area of shape is printed







#endif
