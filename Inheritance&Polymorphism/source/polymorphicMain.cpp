#include <iostream>
#include <memory>
#include <vector>

#include "CheckBox.hpp"
#include "TextBox.hpp"
#include "Widget.hpp"

using namespace std;

int main() {
  // Static or Early binding
  //   vector<Widget> widgets;
  //   widgets.push_back(TextBox{});
  //   widgets.push_back(CheckBox{});

  //   for (const auto& widget : widgets) widget.draw();

  // Dynamic or late binding
  //   vector<Widget*> widgets;
  //   widgets.push_back(new TextBox{});
  //   widgets.push_back(new CheckBox{});

  //   for (const auto& widget : widgets) widget->draw();

  //   for (const auto& widget : widgets) delete widget;

  // Dynamic or late binding
  vector<unique_ptr<Widget>> widgets;  // Polymorphic collections
  widgets.push_back(make_unique<TextBox>());
  widgets.push_back(make_unique<CheckBox>());

  for (const auto& widget : widgets) widget->draw();

  return 0;
}