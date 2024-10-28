#include <iostream>

#include "./include/Carpet.hpp"

using namespace std;

int main() {
  Carpet carpet;
  carpet.setLength(9);
  carpet.setColor("Green");
  cout << carpet;
  cin >> carpet;
  cout << carpet;
  return 0;
}