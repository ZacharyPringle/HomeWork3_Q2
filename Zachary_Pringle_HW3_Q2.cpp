/*******************************************************************************************************
 * Author: Zachary Pringle                                                                             *
 * Program: hw3, q2                                                                                    *
 * Date Created: November 4, 2021                                                                      *
 * Date Last Modified : November 7, 2021                                                               *
 * Usage: No command line arguments                                                                    *
 * Problem: Create a program that can draw and calculate the areas of a triangle and a rectangle using *
 *          classes that are children of a Polygon class                                               *
 *******************************************************************************************************/

#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Rectangle r1(5,9);
    cout << "Area: " << r1.getArea() << endl;
    r1.draw();

    Rectangle r2(12,6);
    cout << "Area: " << r2.getArea() << endl;
    r2.draw();

    Triangle t1(5,10);
    cout << "Area: " << t1.getArea() << endl;
    t1.draw();

    Triangle t2(10, 10);
    cout << "Area: " << t2.getArea() << endl;
    t2.draw();

    //Question1:
    //Polygon p1(5,5);
    //error: cannot declare variable 'p1' to be of abstract type 'Polygon'
    //     Polygon p1(5,5);
    //due to the pure virtual functions getArea() draw()
    //Question 2:
    //Since draw() is still a pure virtual you will get the same error without the getArea() error since it is no longer pure virtual
    return 0;
}
