#include "Cylinder.h"
#include <iostream>

using namespace std;
// Constructor copied when you assign one object of the same class into another object or pass by value into a function.
Cylinder::Cylinder(const Cylinder &source)
{
    cout << "Constructor copied." << endl;
    this->height = source.height;
    this->radius = source.radius;
}

Cylinder::Cylinder(double height, double radius) : height{height}, radius{radius}
{
}

Cylinder::Cylinder(double height, double radius, double slantHeihgt) : Cylinder(height, radius)
{
    this->slantHeight = slantHeight;
}