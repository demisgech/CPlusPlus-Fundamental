#include <iostream>

#include "Rectangle.hpp"

using namespace std;

int main() {
  try {
    double width;
    cout << "Width: ";
    cin >> width;
    Rectangle rectangle;
    rectangle.setWidth(width);
    cout << "Done!" << endl;
  } catch (const invalid_argument& ex) {
    cout << ex.what() << endl;
  } catch (const out_of_range& ex) {
    cout << ex.what() << endl;
  } catch (const logic_error& ex) {  // logic_error is the parent for both
                                     // invalid_argument and out_of_range.
    cout << ex.what() << endl;
  }
  return 0;
}