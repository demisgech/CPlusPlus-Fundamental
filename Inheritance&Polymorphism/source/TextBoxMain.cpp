#include <iostream>

#include "TextBox.hpp"
using namespace std;

int main() {
  TextBox textBox;
  textBox.disable();
  cout << boolalpha << textBox.isEnabled() << endl;

  textBox.draw();
  return 0;
}