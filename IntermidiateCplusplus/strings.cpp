#include <iostream>
#include <string>
#include "logIn.cpp"
#include "customerIdValidator.cpp"
using namespace std;

int main()
{
    string customerNumber = "AB1234";
    cout << boolalpha << isValid(customerNumber) << endl;

    string name = "DEMIS";
    string password = "ab12v34";
    if (isLoggedIn(name, password))
        cout << "You're successfully Logged In!" << endl;
    else
        cout << "Log in faild! sorry! Please, try again!" << endl;

    return 0;
}