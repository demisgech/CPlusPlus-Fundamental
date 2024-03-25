#include <iostream>
using namespace std;

int main()
{
    double firstNumber = 89.9;
    double secondNumber = 78.9;

    if (firstNumber > secondNumber)
    {
        cout << "The largest numbe is " << firstNumber << endl;
    }
    else if (secondNumber > firstNumber)
    {
        cout << "The largest is " << secondNumber << endl;
    }
    else
    {
        cout << "They are equal." << endl;
    }
    return 0;
}