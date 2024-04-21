
#include <iostream>

using namespace std;

void greet()
{
    cout << "Hello world" << endl;
}

string fullName(string firstName, string lastName)
{
    return firstName + " " + lastName;
}
// NB: When overloading function consider the signature of the it. 
// Function Signature = name + (number and type of parameters)
void greet(string name)
{
    cout << "Hello " << name << endl;
}