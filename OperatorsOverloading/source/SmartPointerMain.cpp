#include <iostream>

#include "SmartPointer.hpp"
using namespace std;

int main() {
  SmartPointer smartPointer{new int};
  *smartPointer = 100;
  cout << *smartPointer << endl;

  *smartPointer = 123;
  cout << *smartPointer << endl;
  return 0;
}