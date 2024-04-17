#include <string>
using namespace std;
bool isLoggedIn(string name, string password)
{
    string userName = "Demis";
    string userCriderntial = "ab12v34";

    if (userName.length() != name.length())
        return false;

    for (int i = 0; i < name.length(); i++)
        if (tolower(userName[i]) != tolower(name[i]))
            return false;

    if (userCriderntial.length() != password.length())
        return false;

    for (int i = 0; i < password.length(); i++)
        if (userCriderntial[i] != password[i])
            return false;

    return true;
}