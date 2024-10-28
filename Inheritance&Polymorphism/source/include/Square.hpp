#ifndef SQUARE__HPP__
#define SQUARE__HPP__

#include "Shape.hpp"

class Square : public Shape {
 private:
  double length;

 public:
  using Shape::Shape;
  Square() = default;

  explicit Square(double length);

  double getLength() const;
  void setLength(double length);

  void draw() const override;
};

#endif  // SQUARE__HPP__