#include <iostream>
using namespace std;
int main()
{

    int decimal = 15;
    int remainderList[30] = {0}; // Binary number == reverse element of remainderList
    int i = 0;
    while (decimal > 0)
    {
        remainderList[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << remainderList[j];

    return 0;
}