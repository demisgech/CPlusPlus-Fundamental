#include "Rectangle.hpp"

#include <stdexcept>

using namespace std;

Rectangle::Rectangle(const double &width, const double &height) {
  setWidth(width);
  setHeight(height);
}

void Rectangle::setHeight(const double &height) {
  if (height < 0) {
    throw invalid_argument{"The height cannot be negative!"};
  }
  if (height > 100) {
    throw out_of_range{"Height cannot be greater than 100!"};
  }
  this->height = height;
}
double Rectangle::getHeight() const { return height; }

void Rectangle::setWidth(const double &width) {
  if (width < 0) {
    throw invalid_argument{"The width cannot be negative!"};
  }
  if (width > 100) {
    throw out_of_range{"Width cannot be greater than 100!"};
  }
  this->width = width;
}

double Rectangle::getWidth() const { return width; }
