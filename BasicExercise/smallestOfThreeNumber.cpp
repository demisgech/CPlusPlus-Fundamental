#include <iostream>
using namespace std;

int main()
{

    double firstNumber = 17;
    double secondNumber = 19;
    double thirdNumber = 13;
    double smallestNumber;
    if (firstNumber > secondNumber && secondNumber > thirdNumber)
        smallestNumber = firstNumber;
    else if (secondNumber > firstNumber && firstNumber > thirdNumber)
        smallestNumber = secondNumber;
    else
        smallestNumber = thirdNumber;
    return 0;
}