#include <iostream>
using namespace std;

int main()
{

    const string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index;
    string message = "HELLO GUYS I SAID WELCOME TO PROGRAMMING";
    string encryptedMessage = "";
    for (auto m : message)
    {
        if (!isspace(m))
        {
            index = (letters.find(m) + 10) % 26;
            encryptedMessage += letters[index];
        }
        else
            encryptedMessage += " ";
    }
    cout << "Encrypted message: " << encryptedMessage << endl;

    string decryptedMessage = "";
    for (auto e : encryptedMessage)
    {
        if (!isspace(e))
        {
            index = (letters.find(e) - 10) % 26;
            decryptedMessage += letters[index];
        }
        else
            decryptedMessage += " ";
    }

    cout << "Decryped message: " << decryptedMessage << endl;
    return 0;
}