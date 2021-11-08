//
// Created by ZPringle on 11/7/2021.
//
#include <iostream>

#include "Rectangle.h"

using namespace std;
//draws the rectangle
void Rectangle::draw() {
    for(int i=1; i<=height; i++){
        for(int j=1; j<=width; j++){
            cout << "*";
        }
        cout << endl;
    }
}