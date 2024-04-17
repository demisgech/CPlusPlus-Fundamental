#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
public:
    void setX(const double &x)
    {
        this->x = x;
    }

    void setY(const double &y)
    {
        this->y = y;
    }

    double getX() const
    {
        return x;
    }

    double getY() const
    {
        return y;
    }

private:
    double x;
    double y;
};

bool operator==(const Point &intialPoint, const Point &finalPoint)
{
    return (intialPoint.getX() == finalPoint.getX() &&
            intialPoint.getY() == finalPoint.getY());
}

std::ostream &operator<<(std::ostream &os, Point &point)
{
    return os << (point.getX()) << "," << (point.getY()) << endl;
}

Point getPoint()
{
    Point point;
    point.setX(1);
    point.setY(1);
    return point;
}

void showPoint(Point &point)
{
    cout << "(" << point.getX() << ", " << point.getY() << ")" << endl;
}

double calculateDistance(Point *point)
{
    return sqrt(point->getX() + point->getY());
}
int main()
{
    Point point1;
    point1.setX(8);
    point1.setY(9);

    Point point2;
    point2.setX(8);
    point2.setY(9);

    cout << point1 << endl;
    cout << point2 << endl;

    if (point1 == point2)
        cout << "Equal" << endl;

    Point point;
    point.setX(2);
    point.setY(2);
    showPoint(point);

    Point intial = getPoint();
    cout << intial;

    intial.setX(4);
    intial.setY(40.12);
    cout << calculateDistance(&intial);
    return 0;
}