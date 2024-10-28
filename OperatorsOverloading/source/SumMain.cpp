#include <algorithm>
#include <iostream>
#include <vector>

#include "Sum.hpp"
using namespace std;

int main() {
  vector<double> numbers{12.2, 34.4, 56.4, 56.0, 566, 67.7};
  Sum sum = for_each(numbers.begin(), numbers.end(), Sum());
  cout << "Sum: " << sum << endl;
  return 0;
}