#include <iostream>

using namespace std;

int main()
{
    int number = 45;

    if (number % 5 == 0 && number % 3 == 0)
    {
        cout << number << " is divisible by 5 and 3." << endl;
    }
    else if (number % 5 == 0)
    {
        cout << number << " divisible by 5 but not by 3." << endl;
    }
    else if (number % 3 == 0)
    {
        cout << number << " divisible by 3 but not by 5." << endl;
    }
    else
    {
        cout << number << " is not divisible by 5 and 3." << endl;
    }
}