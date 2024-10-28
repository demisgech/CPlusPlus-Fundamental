#include <iostream>

#include "Array.hpp"

using namespace std;

int main() {
  Array array{10};
  array[0] = 12;
  cout << "Array[0]: " << array[0] << endl;
  return 0;
}