#include <iostream>
using namespace std;

int main()
{
    int numberLimit = 100;
    int evenCounter = 0;
    int oddCounter = 0;
    for (int i = 1; i <= numberLimit; i++)
    {
        if (i % 2 == 0)
            evenCounter++;
        else
            oddCounter++;
    }
    cout << "You got " << evenCounter << " even numbers and " << endl
         << oddCounter << " odd numbers." << endl;

    // OR another technique

    int numberList[] = {32, 56, 76, 45, 78, 79, 97, 99, 55, 31, 21, 33, 12, 35, 37};
    int length = sizeof(numberList) / sizeof(int);

    evenCounter = 0;
    oddCounter = 0;

    for (int i = 0; i < length; i++)
    {
        if (numberList[i] % 2 == 0)
            evenCounter++;
        else
            oddCounter++;
    }

    cout << "You got " << evenCounter << " even numbers and " << endl
         << oddCounter << " odd numbers." << endl;

    return 0;
}