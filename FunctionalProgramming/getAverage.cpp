#include "calculateSum.hpp"
#include <iostream>

using namespace std;
 double getAverage() {
 double numbers[] = {12.3,34,55,45.4,56,78.45,78,89};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    double sum = calculateSum(numbers,size);
    // cout << "Sum = " << sum << endl; // Sum = 448.15
    return sum / size;
 }