#include <iostream>
using namespace std;

int main()
{
    int factorial = 1;
    int n = 7;

    if (n < 0)
        cout << "Sorry! number can't be negative, try again!" << endl;
    else
    {
        if (n == 1 || n == 0)
            factorial = 1;
        else
            for (int i = 2; i <= n; i++)
                factorial *= i;
        cout << n << "! = " << factorial << endl;
    }

    return 0;
}