#ifndef __RECTANGLE__H__
#define __RECTANGLE__H__

#include <string>
using namespace std;

struct Rectangle
{
public:
    Rectangle() = default;
    Rectangle(double width, double height);
    Rectangle(double width, double height, const string &color);
    void draw();
    double getArea();

    // Setter (Mutator)
    void setWidth(double);
    void setHeight(double);

    // Getter (Accessor)
    double getWidth();
    double getHeight();

    /*

    *** Data Hiding principle ****
    👉 States that: A class shoud hide its internal data from the outside code and provide functions for accessing the date.

    */
private:
    double width;
    double height;
    string color;
};
#endif //!__RECTANGLE__H__