#include "Circle.hpp"

#include <iostream>

using namespace std;

Circle::Circle(double x, double y) {
  this->x = x;
  this->y = y;
}

double Circle::getX() const { return x; }

double Circle::getY() const { return y; }

double Circle::getRadius() const { return radius; }

void Circle::setRadius(double radius) { this->radius = radius; }

void Circle::draw() const { cout << "Drawing a Circle" << endl; }

void Circle::setY(double y) { this->y = y; }

void Circle::setX(double x) { this->x = x; }