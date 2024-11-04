#include <iostream>

#include "AccountLocked.hpp"
#include "Rectangle.hpp"
using namespace std;

void createRectangle() {
  try {
    Rectangle rect;
    rect.setWidth(-1);
  } catch (const invalid_argument& ex) {
    cout << "Close the file" << endl;
    throw;  // re-throw the exception
  }
}

void doWork() { createRectangle(); }

void login() { throw AccountLocked{}; }
int main() {
  try {
    login();
    // doWork();
  } catch (const AccountLocked& ex) {
    cout << ex.what() << endl;
  }

  catch (const exception& ex) {
    // Write to log files or database to know exceptions really happen
    cout << ex.what() << endl;
  }

  return 0;
}