/*
Write a C++ function that evaluates a student's grade based on their numerical score 
and prints the corresponding letter grade. The function should also indicate 
if the student passed or failed the course based on the letter grade.

Grading Scale:
A: 90 to 100
B: 80 to 89
C: 70 to 79
D: 60 to 69
F: Below 60

Passing Criteria:
Grades A, B, and C are considered passing.
Grades D and F are considered failing.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your Score" << "\n";
    float numerical_score = 0;
    cin >> numerical_score;

    if (numerical_score <= 100 && numerical_score >= 90)
    {
        cout << "Grade A " << " Passed" << "\n";
    }
    else if (numerical_score <= 89 && numerical_score >= 80)
    {
        cout << "Grade B" << " Passed" << "\n";
    }
    else if (numerical_score <= 79 && numerical_score >= 70)
    {
        cout << "Grade C" << " Passed" << "\n";
    }
    else if (numerical_score <= 69 && numerical_score >= 60)
    {
        cout << "Grade D" << " Faild" <<"\n";
    }
    else if (numerical_score < 60)
    {
        cout << "Grade F" << " Faild" << "\n";
    }
    
    return 0;
    
}