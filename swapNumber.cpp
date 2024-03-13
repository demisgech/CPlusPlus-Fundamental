#include <iostream>
using namespace std;

int main()
{
    int first = 12;
    int second = 23;
    cout << "Before swapping" << endl
         << "First = " << first << endl
         << "Second = " << second << endl;

    // Using third variable
    int temp = first;
    first = second;
    second = temp;
    cout << "After first swap" << endl
         << "First = " << first << endl
         << "Second = " << second << endl;

    // Without using third variable
    first = first + second;
    second = first - second;
    first = first - second;
    cout << "After second swap" << endl
         << "First = " << first << endl
         << "Second = " << second << endl;

    return 0;
}