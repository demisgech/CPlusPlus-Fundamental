#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw()
{
    cout << "Draw a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

double Rectangle::getArea()
{
    return width * height;
}

void Rectangle::setWidth(double width)
{
    if (width < 0)
        throw invalid_argument{"Width cannot be negative"}; // Throw an exception
    // (*this).width = width; or
    this->width = width;
}

double Rectangle::getWidth()
{
    // return this->width; or
    return width;
}

void Rectangle::setHeight(double theHeight)
{
    if (theHeight < 0)
        throw invalid_argument{"Height cannot be negative."};
    // height = theHeight;
    // (*this).height = theHeight;

    this->height = theHeight;
}

double Rectangle::getHeight()
{
    return this->height;
}