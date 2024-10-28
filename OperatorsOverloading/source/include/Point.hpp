#ifndef POINT__HPP__
#define POINT__HPP__

#include <compare>
#include <ostream>

class Point {
 private:
  double x;
  double y;

 public:
  Point(double, double);

  double getX() const;
  double getY() const;

  void setX(double);
  void setY(double);

  bool operator==(const Point& other);
  bool operator!=(const Point& other);

  bool operator<(const Point& other) const;
  bool operator<=(const Point& other) const;

  bool operator>(const Point& other) const;
  bool operator>=(const Point& other) const;

  // std::strong_ordering operator<=>(const Point& other) const;
  std::partial_ordering operator<=>(const Point& other) const;

  // Overlaoding Arithmetic Operators
  Point operator+(const Point& other) const;
  Point operator+(const int other) const;

  Point operator-(const Point& other) const;
  Point operator-(const int other) const;

  Point operator*(const Point& other) const;
  Point operator*(const int other) const;

  Point operator/(const Point& other) const;
  Point operator/(const int other) const;

  Point operator%(const Point& other) const;
  Point operator%(const int other) const;

  Point& operator++();
  Point operator++(int);

  Point& operator--();
  Point operator--(int);

  // Overloading Augmented Assignment Operators
};

std::ostream& operator<<(std::ostream& stream, const Point& point);

#endif  // POINT__HPP__