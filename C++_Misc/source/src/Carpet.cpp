#include "Carpet.hpp"

#include <iostream>

using namespace std;

Carpet::Carpet(double length, double width) : length{length}, width{width} {}

Carpet::Carpet(double length, double width, const string& color)
    : Carpet{length, width} {
  this->color = color;
}

double Carpet::getLength() { return length; }

double Carpet::getWidth() { return width; }

string Carpet::getColor() { return color; }

double Carpet::getPrice() { return price; }

void Carpet::setLength(double length) { this->length = length; }

void Carpet::setWidth(double width) { this->width = width; }

void Carpet::setColor(const string& color) { this->color = color; }

void Carpet::setPrice(double price) { this->price = price; }

ostream& operator<<(ostream& output, const Carpet& other) {
  output << "Length: " << other.length << endl
         << "Width: " << other.width << endl
         << "Color: " << other.color << endl
         << "Price: $" << other.price << endl;
  return output;
}

istream& operator>>(istream& input, Carpet& other) {
  input >> other.length >> other.width >> other.color >> other.price;
  return input;
}
