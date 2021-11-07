//
// Created by ZPringle on 11/7/2021.
//

#ifndef HW3_Q2_RECTANGLE_H
#define HW3_Q2_RECTANGLE_H

#include "Polygon.h"

class Rectangle:public Polygon {
public:
    Rectangle();
    Rectangle(int newHeight, int newWidth){height=newHeight; width=newWidth;}
    virtual int getArea(){return(height*width);}
    virtual void draw();
protected:
};


#endif //HW3_Q2_RECTANGLE_H
