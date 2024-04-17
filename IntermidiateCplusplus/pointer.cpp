#include <iostream>
using namespace std;

int main()
{
    // Both the data and the pointers are not constant
    int r = 34;
    int *ptr0 = &r;
    r = 89;
    *ptr0 = 21;

    // The data is constant while the pointer is not
    const int x = 10;
    const int *prt = &x;
    int y = 20;
    prt = &y;
    // cout << x << endl;

    // The pointer is constant while the date is not
    int z = 23;
    int *const ptr2 = &z;
    *ptr2 = 120;

    z = 230;
    int y = 234;
    // ptr2 = &y; --> compilation error
    // cout << z << endl;

    // Both the data and the pointers are constant

    const int m = 34;
    const int *const ptr3 = &m;

    // Compilation error
    // m = 90;
    // *ptr3 = 45;

    return 0;
}