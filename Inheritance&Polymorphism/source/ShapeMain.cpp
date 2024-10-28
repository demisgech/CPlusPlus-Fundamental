#include <iostream>

#include "Circle.hpp"
#include "Shape.hpp"
#include "Square.hpp"
using namespace std;

void showWidget(Shape* shape) { shape->draw(); }
int main() {
  Circle circle;
  Square square;
  showWidget(&circle);
  showWidget(&square);
  return 0;
}