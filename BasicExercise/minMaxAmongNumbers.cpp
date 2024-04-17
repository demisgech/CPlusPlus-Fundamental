#include <iostream>
using namespace std;

int main()
{

    int numbers[] = {23, 45, 67, 45, 21, 67, 87, 96};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int maxNumber = numbers[0];
    int minNumber = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > maxNumber)
            maxNumber = numbers[i];
        if (numbers[i] < minNumber)
            minNumber = numbers[i];
    }

    cout << "Maximum number = " << maxNumber << endl;
    cout << "Minimum number = " << minNumber << endl;

    return 0;
}