//
// Created by ZPringle on 11/7/2021.
//
#include <iostream>

using namespace std;

#include "Triangle.h"
//draws the triangle
void Triangle::draw() {
    int i,j,k;
    for(i=1;i<=height;i++){
        for(j=1;j<=height-i;j++){
            cout << " ";
        }
        for(k=1;k<=2*i-1;k++){
            cout << "*";
        }
        cout << endl;
    }
}