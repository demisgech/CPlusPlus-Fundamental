#include "Square.hpp"

#include <iostream>

Square::Square(double length) { this->length = length; }

double Square::getLength() const { return length; }

void Square::setLength(double length) { this->length = length; }

void Square::draw() const { std::cout << "Drawing a Square" << std::endl; }
