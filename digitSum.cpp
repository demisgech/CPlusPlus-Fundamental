#include <iostream>
using namespace std;
int main()
{
    int number = 536;
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    cout << "Sum = " << sum << endl; // 14
    return 0;
}