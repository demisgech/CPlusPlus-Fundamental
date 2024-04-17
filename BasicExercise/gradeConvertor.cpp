#include <iostream>
using namespace std;
int main()
{

    double score = 89.7;
    char letterGrade;
    if (score >= 85 && score <= 100)
        letterGrade = 'A';
    else if (score >= 60 && score < 85)
        letterGrade = 'B';
    else if (score >= 45 && score < 60)
        letterGrade = 'C';
    else if (score >= 0 && score < 45)
        letterGrade = 'F';
    else
        cout << "Sorry! Score must be between 0 and 100." << endl;
    cout << "Letter grade = " << letterGrade << endl;
    return 0;
}