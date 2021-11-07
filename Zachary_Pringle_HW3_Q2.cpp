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
    return 0;
}
