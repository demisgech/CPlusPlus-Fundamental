#include <iostream>
using namespace std;

int main()
{
    string str = to_string(112);
    double price = stod("12.34");
    int toInt = stoi("10");
    float toFloat = stof("12.3");

    string rowString = R"("c:\folderA\folderB\file.txt")";
    cout << rowString;
    return 0;
}