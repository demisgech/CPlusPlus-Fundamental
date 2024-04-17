#include <iostream>
#include <memory>
using namespace std;

int main()
{
    int capacity = 5;
    auto numbers = make_unique<int[]>(capacity);
    int entries = 0;

    while (true)
    {
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail())
            break;
        entries++;
    }

    for (int i = 0; i < entries; i++)
        cout << numbers[i] << endl;

    shared_ptr<int> x(new int);
    *x = 12;
    auto y(x); // shared_ptr<int> y(x)
    cout << *y;

    return 0;
}