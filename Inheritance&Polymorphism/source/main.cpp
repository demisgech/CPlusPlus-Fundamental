#include <iostream>

#include "CheckBox.hpp"
#include "TextBox.hpp"
#include "Widget.hpp"
using namespace std;

void showWidget(Widget& widget) { widget.draw(); }
int main() {
  Widget widget;
  widget.enable();
  bool isEnabled = widget.isEnabled();
  cout << boolalpha << isEnabled << endl;
  TextBox box;

  // Upcasting
  widget = box;
  // Downcasting  which is illegal
  // box = widget; // Error

  CheckBox checkBox;
  showWidget(box);
  showWidget(checkBox);
  return 0;
}