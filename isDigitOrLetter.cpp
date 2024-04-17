#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "Enter alphanum: ";
    char ch;
    cin >> ch;

    if (isalpha(ch))
        cout << ch << " is a letter." << endl;
    else if (isdigit(ch))
        cout << ch << " is a digit." << endl;
    else
        cout << ch << " is a symbol." << endl;

    return 0;
}
