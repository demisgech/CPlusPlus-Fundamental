#include <iostream>

using namespace std;

int main()
{
    double length = 12.3;
    double width = 29.2;
    double area = length * width;
    cout << "Area = " << area << endl;

    double radius = 12.4;
    const double pi = 3.14;
    double circleArea = pi * radius * radius;

    cout << "Circle area = " << circleArea << endl;

    double circumference = 2 * pi * radius;
    cout << "Circumference = " << circumference << endl;
    return 0;
}