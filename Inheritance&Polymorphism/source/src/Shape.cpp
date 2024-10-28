#include "Shape.hpp"

#include <iostream>

Shape::Shape(const string& background) { this->background = background; }

void Shape::setBackground(const string& background) {
  this->background = background;
}

// void Shape::draw() const { std::cout << "Drawing a Shape!" << std::endl; }

string Shape::getBackground() const { return background; }