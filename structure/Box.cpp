#include "Box.h"
#include <iostream>

using namespace std;

Box::Box(double width, double length, double height) : width{width}, length{length}
{
    cout << "Constructing a Box." << endl;
    this->height = height;
}

/* Another way to initialize a destructor
Box::~Box()
{
    cout << "Destructor Called" << endl;
}
*/
