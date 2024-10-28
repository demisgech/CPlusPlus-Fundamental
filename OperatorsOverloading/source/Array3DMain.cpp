#include <iostream>

#include "Array3D.hpp"

using namespace std;

int main() {
  Array3D<int, 4, 3, 2> v;
  v(3, 2, 1) = 45;
  cout << "v[3,2,1]: " << v(3, 2, 1) << endl;
  return 0;
}