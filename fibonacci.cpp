#include <iostream>
using namespace std;
int main()
{

    int previousTerm = 0;
    int currentTerm = 1;
    int nextTerm;
    int termLimit = 20;
    cout << previousTerm << "," << currentTerm << ",";
    for (int i = 2; i <= termLimit; i++)
    {
        nextTerm = previousTerm + currentTerm;
        previousTerm = currentTerm;
        currentTerm = nextTerm;
        cout << currentTerm << ",";
    }
    return 0;
}