#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long sum = 0;
    size_t numberLimit = 8;
    int j = 1;
    for (int i = 1; i < numberLimit; i += 2)
    {
        sum = sum + pow(-1, j + 1) * pow(i, 2);
        j++;
    }
    cout << "Sum = " << sum << endl;

    return 0;
}