//
// Created by ZPringle on 11/7/2021.
//

#include "Polygon.h"

Polygon::Polygon()
{
    //ctor
}
//sets width and height for a constructor
Polygon::Polygon(int newWidth, int newHeight){
    width = newWidth;
    height = newHeight;

}

//sets the width
void Polygon::setWidth(int newWidth){
    width = newWidth;

}

//sets the height
void Polygon::setHeight(int newHeight){
    height = newHeight;

}