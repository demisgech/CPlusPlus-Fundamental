#include <string>
#include <iostream>
#include <vector>
using namespace std;

// string fullName(string &firstName, string &lastName)
// {
//     return firstName + " " + lastName;
// }

struct Users
{
    string name;
    string password;
};
vector<Users> users;

bool isSignedUp(const string &name, const string &password, const string &comfirmPassword)
{
    if (name.length() == 0)
        return false;

    if (password.length() == 0 && comfirmPassword.length() == 0)
        return false;

    if (password.length() != comfirmPassword.length())
        return false;

    for (int i = 0; i < password.length(); i++)
        if (password[i] != comfirmPassword[i])
            return false;
    users.push_back({name, password});

    return true;
}

void showUsers(Users &user)
{
    cout << "***** List of Users in a database *****" << endl
         << "Name: " << user.name << endl
         << "Password: " << user.password << endl;
}