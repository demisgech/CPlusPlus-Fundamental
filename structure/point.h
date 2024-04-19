#ifndef __POINT__H__
#define __POINT__H__
struct Point
{
    /*
     * Member variables
     * Attributes
     * Fields
     * Properties
     */
    double radius;
    const float pi = 3.14;

    /*
     * Methods
     * Member functions
     */

    /*

    *** Encapsulation principles ***
    👉 States that: A class combines the data and functions that operate on the data into one unit.
    */
    void draw();
    double getArea();
};

#endif //!__POINT__H__