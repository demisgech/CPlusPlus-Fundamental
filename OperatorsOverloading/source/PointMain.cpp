#include <compare>
#include <iostream>

#include "Point.hpp"
using namespace std;

int main() {
  Point first{9, 8};
  Point second{91, 8};
  if (first == second) cout << "Equal!" << endl;

  if (first < second) cout << "First Less" << endl;
  if (first <= second) cout << "First less or equal" << endl;

  if (first > second) cout << "First greater" << endl;

  if (first >= second) cout << "First greater or equal" << endl;

  auto result = first <=> second;

  if (result == strong_ordering::less)
    cout << "Less" << endl;
  else if (result == strong_ordering::equal)
    cout << "Equal" << endl;
  else if (result == strong_ordering::greater)
    cout << "Greater" << endl;
  else if (result == strong_ordering::equivalent)
    cout << "Equivalent" << endl;

  result = first <=> second;
  if (result == partial_ordering::equivalent) cout << "Equivalent" << endl;

  cout << first << endl << second << endl;

  Point third = first + second;
  cout << third << endl;

  Point fourth = third + 20;
  cout << fourth << endl;

  auto remainder = first % second;
  cout << "Remainder: " << remainder << endl;

  auto product = first * second;
  cout << "Product: " << product << endl;

  auto postIncrement = first++;
  cout << "First: " << first << endl;
  cout << "PostIncrement: " << postIncrement << endl;

  auto preIncrement = ++first;
  cout << "First: " << first << endl;
  cout << "PreIncrement: " << preIncrement << endl;

  return 0;
}