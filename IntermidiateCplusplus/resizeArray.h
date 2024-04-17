#include <iostream>
using namespace std;

void resizeArray()
{
    int capacity = 5;
    int *numbers = new int[capacity];
    int entries = 0;
    while (true)
    {
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail())
            break;
        entries++;
        if (entries == capacity)
        {
            capacity++;
            // Create a temp array (larger than the initial size)
            // Copy all the elements
            // Have "numbers" pointer point to the new array
            int *temp = new int[capacity];
            for (int i = 0; i < entries; i++)
                temp[i] = numbers[i];

            // Freeing Up the old array
            delete[] numbers;
            numbers = nullptr;
            numbers = temp;

            // Freeing Up the new array
            delete[] temp;
            temp = nullptr;
        }
    }

    for (size_t i = 0; i < entries; i++)
    {
        cout << numbers[i] << endl;
    }

    delete[] numbers;
    numbers = nullptr;
}