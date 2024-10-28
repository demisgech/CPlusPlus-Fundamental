#ifndef CIRCLE__HPP__
#define CIRCLE__HPP__

#include "Shape.hpp"
class Circle : public Shape {
 private:
  double x;
  double y;
  double radius;

 public:
  using Shape::Shape;
  Circle() = default;
  Circle(double, double);

  double getX() const;
  double getY() const;
  double getRadius() const;

  void setX(double);
  void setY(double);
  void setRadius(double);

  void draw() const override final;
  // void draw() const final override;
};
#endif  // CIRCLE__HPP__