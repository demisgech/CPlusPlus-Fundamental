#include "TextBox.hpp"

#include <iostream>

using namespace std;

TextBox::TextBox() { cout << "TextBox constructed!" << endl; }

TextBox::TextBox(bool enabled) : Widget{enabled} {
  cout << "TextBox constructed!" << endl;
  // This constructor is purely for demonstration or to pass some value to the
  // base constructor
}

// TextBox::TextBox(const std::string& value) : value{value} {}

TextBox::TextBox(bool enabled, const std::string& value)
    : Widget(enabled), value{value} {}

TextBox::~TextBox() { std::cout << "TexBox destructed!" << std::endl; }

void TextBox::draw() const { std::cout << "Drawing a TextBox" << std::endl; }

std::string TextBox::getValue() {
  // protected Members: OK
  this->width = 12;
  // private Members: No
  //   this->enabled = false; //Error!
  return value;
}

void TextBox::setValue(const std::string& value) { this->value = value; }
