#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {

    public:
        Rectangle() : l{0}, w{0} {} //POST - create rectangle object and initialized to 0
        Rectangle(int l, int w) : l{l}, w{w} {} //PRE - l = length | w = width 
                                                //POST - rectangle object initialized to l,w PDM
        Rectangle(int x, int y, int l, int w) : Shape(x, y), l{l}, w{w} {} //PRE - l = length | w = width | x = x coordinate | y = y coordinate
                                                                           //POST - rectangle object intialized to l,w PDM at x,y coordinate

        void print() const;
         
        double calcPerimeter() const override { return 2 * (l + w); }
        double      calcArea() const override { return l * w; }
        void updateDimensions() override;



    private:
        int l;
        int w;

};

#endif
