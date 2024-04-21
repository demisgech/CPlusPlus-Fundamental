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

Rectangle::Rectangle(double width, double height)
{
    cout << "Constructing a Rectangle." << endl;
    setWidth(width);
    setHeight(height);
}

// Another way for initializing default constructor
//  Rectangle::Rectangle()
//  {
//   width = height = 0;
//  }

/* Bad practice
Rectangle::Rectangle(double width, double height, const string &color)
{
    cout << "Constructing a rectangle with a color." << endl;
    setWidth(width);
    setHeight(height);
    this->color = color;
}
*/

//* Constructor deligation : Best practice

Rectangle::Rectangle(double width, double height, const string &color) : Rectangle(width, height)
{
    cout << "Constructing a rectangle with a color." << endl;
    this->color = color;
}

// */