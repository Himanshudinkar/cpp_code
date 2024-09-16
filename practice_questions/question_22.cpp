/*
Analyze the result of students.
Accept marks of 5 subject from user.
calculate total and percent, print them
on output.

Also check in how many subjects 
student scored 60% and above marks.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Maths Marks" << "\n";
    int maths_marks = 0;
    cin >> maths_marks;

    cout << "Enter Science Marks" << "\n";
    int science_marks = 0;
    cin >> science_marks;

    cout << "Enter Sanskrit Marks" << "\n";
    int sanskrit_marks = 0;
    cin >> sanskrit_marks;

    cout << "Enter English Marks" << "\n";
    int english_marks = 0;
    cin >> english_marks;

    cout << "Enter Social Science Maeks" << "\n";
    int social_science_marks = 0;
    cin >> social_science_marks;

    int totle_marks = maths_marks + science_marks + sanskrit_marks + english_marks + social_science_marks;
    cout << "Totle Marks is = " << totle_marks << "\n";

    float percentage = totle_marks / 5.0;
    cout << "percentage is = " << percentage; << "\n";

    int chack = 0;
    int minimum_percentage = 60;

    if (maths_marks >= minimum_percentage)
    {
        chack++;
    }
    if (english_marks >= minimum_percentage)
    {
        chack++;
    }
    if (sanskrit_marks >= minimum_percentage)
    {
        chack++;
    }
    if (science_marks >= minimum_percentage)
    {
        chack++;
    }
    if (social_science_marks >= minimum_percentage)
    {
        chack++;
    }
    cout << "number of students with 60% = " << chack << "\n";
    return 0;
    
}