#include <iostream>

using namespace std;

void increasePrice(double *price)
{
    *price *= 1.2;
}

void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

void printNumbers(int numbers[])
{
    numbers[0] = 100;
}
int main()
{

    // double price = 100;
    // increasePrice(&price);
    // cout << price << endl;

    // int first = 23;
    // int second = 40;
    // cout << first << "," << second << endl;

    // swap(&first, &second);
    // cout << first << "," << second << endl;

    int numbers[] = {12, 34, 21};
    int length = size(numbers);
    int *ptr = &numbers[length - 1];

    cout << "Using while loop" << endl;
    while (ptr >= numbers)
    {
        cout << *ptr << endl;
        ptr--;
    }

    cout << "Using for loop" << endl;
    for (ptr = numbers; ptr < &numbers[length]; ptr++)
    {
        cout << *ptr << endl;
    }

    return 0;
}