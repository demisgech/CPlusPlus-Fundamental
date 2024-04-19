#include "structure/TextBox.h"
#include <iostream>

using namespace std;
int main()
{
    TextBox box;
    box.setValue("Welcome to C++.");
    cout << box.getValue() << endl;

    return 0;
}