#include <iostream>

using namespace std;
int main()
{

    int numbers[] = {13, 24, 11, 45, 67, 89};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int minNumber = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < minNumber)
            minNumber = numbers[i];
    }

    cout << "Minimum number = " << minNumber << endl;
}