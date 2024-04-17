#include <iostream>
using namespace std;

int main()
{
    int numberLimit = 1000;
    int sum = 0;
    for (int i = 1; i <= numberLimit; i++)
    {
        if (i % 2 == 0)
            sum += i;
    }
    cout << "Sum = " << sum << endl;

    return 0;
}