#include <iostream>

#include "Customer.hpp"
using namespace std;

int main() {
  Customer customer{1, "Mr.", "Demis"};
  cout << customer << endl;
  return 0;
}