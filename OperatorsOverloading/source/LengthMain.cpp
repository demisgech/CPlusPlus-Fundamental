#include <compare>
#include <iostream>

#include "Length.hpp"
using namespace std;

int main() {
  Length first{20};
  Length second{12};

  if (first == second) cout << "Equal!" << endl;
  if (first == 20) cout << "Built in Eqaul!" << endl;

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
  cout << "First and Second: ";
  cin >> first >> second;
  cout << first << endl << second << endl;

  auto obj = first + second;
  cout << obj << endl;

  auto preIncremet = ++first;
  cout << "PreIncrement: " << preIncremet << endl;

  auto PostIncrement = second++;
  cout << "Post Increment: " << PostIncrement << endl;

  auto preDecrement = --second;
  cout << "PreDecrement: " << preDecrement << endl;

  auto postDecrement = first--;
  cout << "Post decrement: " << postDecrement << endl;

  second += first;
  cout << "Second: " << second << endl;

  // Copy constructor (NEW OBJECT)
  Length fiveth = first;

  // Assignment operator (EXISTING OBJECT)
  second = first;

  // Type conversion

  int x = fiveth;
  cout << "X: " << x << endl;
  return 0;
}