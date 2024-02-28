#include <iostream>
using namespace std;

int main()
{

    int counter = 0;
    int number = 101;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            counter++;
    }
    // if counter exaclty == 2 number is prime
    if (counter == 2)
        cout << number << " is prime." << endl;
    else
        cout << number << " is not prime." << endl;
    return 0;
}