#include <iostream>

#include "Linear.hpp"
using namespace std;

int main() {
  Linear f{1.2, 13.2};
  Linear g{1, 3};
  auto f_0 = f(0);
  auto g_1 = g(1);
  return 0;
}