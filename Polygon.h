//
// Created by ZPringle on 11/7/2021.
//

#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
public:
    Polygon();//default
    Polygon(int newWidth, int newHeight);//set with a width and height
    void setWidth(int newWidth);//sets width
    void setHeight(int newHeight);//sets height
    virtual int getArea() = 0;//pure virtual function for getArea
    virtual void draw() = 0;//pure virtual function for draw()
    //int getArea();
    //void draw();

protected:
    int width = 0;
    int height = 0;
};

#endif // POLYGON_H
