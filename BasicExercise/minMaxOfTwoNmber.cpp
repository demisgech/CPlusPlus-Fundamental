#include <iostream>

using namespace std;

int main()
{

    // Min...Max of two number

    int firstNumber = 12;
    int secondNumber = 34;
    if (firstNumber > secondNumber)
    {
        cout << "Maximum number = " << firstNumber << endl;
        cout << "Minimum number = " << secondNumber << endl;
    }
    else if (secondNumber > firstNumber)
    {
        cout << "Maximum number = " << secondNumber << endl;
        cout << "Minimum number = " << firstNumber << endl;
    }
    else
    {
        cout << "They are equal." << endl;
    }

    return 0;
}
