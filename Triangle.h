//
// Created by ZPringle on 11/7/2021.
//

#ifndef HW3_Q2_TRIANGLE_H
#define HW3_Q2_TRIANGLE_H

#include "Polygon.h"

class Triangle:public Polygon {
public:
    Triangle();//default
    Triangle(int newHeight, int newWidth){height=newHeight; width=newWidth;}//constructor that sets height and weight with it
    virtual int getArea(){return((width*height)/2);}//returns area of a triangle
    virtual void draw();//draws the triangle using * for the shape. The shape size is determined by the height so the size is not the actual size of the triangle
protected:
};

#endif //HW3_Q2_TRIANGLE_H
