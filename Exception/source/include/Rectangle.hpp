#ifndef RECTANGLE__HPP__
#define RECTANGLE__HPP__
class Rectangle {
 private:
  double width;
  double height;

 public:
  Rectangle() = default;
  Rectangle(const double& width, const double& height);

  void setHeight(const double& height);
  double getHeight() const;

  void setWidth(const double& width);
  double getWidth() const;
};
#endif