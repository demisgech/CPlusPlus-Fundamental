#ifndef __CYLINDER__H__
#define __CYLINDER__H__
struct Cylinder
{
public:
    Cylinder() = default;
    // Copy constructor -> must be declared as constant reference parameter
    Cylinder(const Cylinder &source);
    Cylinder(double height, double radius);
    Cylinder(double height, double radius, double slantHeight);

private:
    double height;
    double radius;
    double slantHeight;
};
#endif //!__CYLINDER__H__