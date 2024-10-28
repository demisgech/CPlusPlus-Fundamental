#include "Point.hpp"

Point::Point(double x, double y) : x{x}, y{y} {}

bool Point::operator==(const Point& other) {
  return (x == other.x) and (y == other.y);
}

bool Point::operator!=(const Point& other) {
  return !(x == other.x && y == other.y);
}

bool Point::operator<(const Point& other) const {
  return (x < other.x) && (y < other.y);
}

bool Point::operator<=(const Point& other) const {
  return !((x > other.x) || (y > other.y));
}

bool Point::operator>(const Point& other) const {
  return (x > other.x) && (y > other.y);
}

bool Point::operator>=(const Point& other) const {
  return !((x < other.x) || (y < other.y));
}

// std::strong_ordering Point::operator<=>(const Point& other) const {
//   if (auto cmp = (x <=> other.x); cmp != 0) return cmp;

//   return y <=> other.y;
// }

std::partial_ordering Point::operator<=>(const Point& other) const {
  if (auto cmp = (x <=> other.x); cmp != 0) return cmp;

  return y <=> other.y;
}

Point Point::operator+(const Point& other) const {
  return Point((x + other.x), (y + other.y));
}

Point Point::operator+(const int other) const {
  return Point(x + other, y + other);
}

Point Point::operator-(const Point& other) const {
  return Point(x - other.x, y - other.y);
}

Point Point::operator-(const int other) const {
  return Point(x - other, y - other);
}

Point Point::operator*(const Point& other) const {
  return Point(x * other.x, y * other.y);
}

Point Point::operator*(const int other) const {
  return Point(x * other, y * other);
}

Point Point::operator/(const Point& other) const {
  return Point(x / other.x, y / other.y);
}

Point Point::operator/(const int other) const {
  return Point(x / other, y / other);
}

Point Point::operator%(const Point& other) const {
  return Point(static_cast<int>(x) % static_cast<int>(other.x),
               static_cast<int>(y) % static_cast<int>(other.y));
}

Point Point::operator%(const int other) const {
  return Point(static_cast<int>(x) % static_cast<int>(other),
               static_cast<int>(y) % static_cast<int>(other));
}

Point& Point::operator++() {
  // TODO: insert return statement here
  x++;
  y++;
  return *this;
}

Point Point::operator++(int) {
  Point copy = *this;
  operator++();
  return copy;
}

Point& Point::operator--() {
  this->x++;
  this->y++;
  return *this;
}

Point Point::operator--(int) {
  Point copy = *this;
  operator--();
  return copy;
}

double Point::getX() const { return x; }

double Point::getY() const { return y; }

void Point::setX(double x) { this->x = x; }

void Point::setY(double y) { this->y = y; }

std::ostream& operator<<(std::ostream& stream, const Point& point) {
  // TODO: insert return statement here
  stream << "(" << point.getX() << "," << point.getY() << ")";
  return stream;
}
