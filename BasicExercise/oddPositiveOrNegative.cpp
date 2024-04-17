#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;
    if (number > 0 && number % 2 == 0)
        cout << number << " is Even positive. \n";
    else if (number < 0 && number % 2 == 0)
        cout << number << " is Even negative. \n";
    else if (number > 0 && number % 2 != 0)
        cout << number << " is odd positive. \n";
    else if (number < 0 && number % 2 != 0)
        cout << number << " is odd negative. \n";
    else
        cout << number << " is not a positive or negative number. \n";
    return 0;
}