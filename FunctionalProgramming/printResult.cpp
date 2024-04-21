#include "greet.hpp"
#include "calculateTax.hpp"
#include "getAverage.cpp"

void printResult()
{
    greet();
    greet(fullName("Demis", "Getachew"));

    double tax = calculateTax(10000);
    cout << "Tax = " << tax << endl;

    tax = calculateTax(10000, .35);
    cout << "Tax = " << tax << endl;

    double avg = getAverage();
    cout << "Average = " << avg << endl;
}