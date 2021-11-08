//
// Created by ZPringle on 11/7/2021.
//

#ifndef HW3_Q2_RECTANGLE_H
#define HW3_Q2_RECTANGLE_H

#include "Polygon.h"

class Rectangle:public Polygon {
public:
    Rectangle();//default
    Rectangle(int newHeight, int newWidth){height=newHeight; width=newWidth;}//sets width and height with the constructor
    virtual int getArea(){return(height*width);}//returns area of a rectangle (base times height)
    virtual void draw();//draws the rectangle on the screen using * symbols
protected:
};


#endif //HW3_Q2_RECTANGLE_H
