#include <iostream>

using namespace std;

int main()
{

    double temperature = 40;

    if (temperature > 30)
        cout << "Hot!" << endl;
    else if (temperature < 20)
        cout << "Cool!" << endl;
    else
        cout << "Steady!" << endl;

    double fahrenhiet = -40;
    double centigrade = (fahrenhiet - 32) * 5 / 9;
    cout << "Cetigrade = " << centigrade << endl;
    return 0;
}