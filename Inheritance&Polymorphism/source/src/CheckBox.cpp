#include "CheckBox.hpp"

#include <iostream>

using namespace std;

CheckBox::CheckBox() { cout << "Checkbox constructed!" << endl; }
CheckBox::~CheckBox() { cout << "CheckBox destructed!" << endl; }

void CheckBox::draw() const { cout << "Drawing a Checkbox" << endl; }