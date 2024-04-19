#include "point.h"
#include <iostream>

using namespace std;

void Point::draw()
{
    cout << "Draw a circle with radius " << radius << endl;
}

double Point::getArea()
{
    return pi * radius * radius;
}