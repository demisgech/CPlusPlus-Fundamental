#include "Widget.hpp"

#include <iostream>

Widget::Widget() { std::cout << "Widget Constructed!" << std::endl; }

Widget::Widget(bool enabled) {
  std::cout << "Widget Constructed!" << std::endl;
  this->enabled = enabled;
}

Widget::~Widget() { std::cout << "Widget destructed!" << std::endl; }

void Widget::draw() const { std::cout << "Drawing a Widget" << std::endl; }

void Widget::enable() { enabled = true; }

void Widget::disable() { enabled = false; }

bool Widget::isEnabled() const { return enabled; }
