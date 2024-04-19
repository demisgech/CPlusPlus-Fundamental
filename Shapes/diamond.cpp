#include <cmath>
#include <iostream>

using namespace std;
void diamond(int size)
{
    for (int i = size; i >= -size; i--)
    {
        for (int j = 1; j <= abs(i); ++j)
            cout << " ";

        for (int k = size; k >= abs(i); --k)
            cout << "W ";

        cout << endl;
    }
}