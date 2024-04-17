#include <iostream>

using namespace std;

int main()
{

    cout << "Enter a number: ";
    int base10;
    cin >> base10;

    int remainderNumberList[30] = {0};
    int i = 0;
    while (base10 > 0)
    {
        remainderNumberList[i] = base10 % 2;
        base10 /= 2;
        i++;
    }

    for (int j = i - 1, x = 0; j >= 0 && x < i; x++, j--)
    {
        cout << remainderNumberList[j];
        remainderNumberList[x] = remainderNumberList[j];
    }

    cout << endl;
    for (int x = 0; x < i; x++)
        cout << remainderNumberList[x];
    cout << endl;

    if (remainderNumberList[i - 1] == 1)
        cout << i << "th bit is 1." << endl;
    else
        cout << i << "th bit is 0." << endl;
    return 0;
}