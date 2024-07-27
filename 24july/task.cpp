/*
Analyze the result of students 
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
    cout << "Enter marks of Maths" << "\n";
    int maths_marks = 0;
    cin >> maths_marks;
    
    cout << "Enter marks of science" << "\n";
    int sceince_marks = 0;
    cin >> sceince_marks;
    
    cout << "Enter marks of biology" << "\n";
    int bilogy_marks = 0;
    cin >> bilogy_marks;
    
    cout << "Enter marks of history" << "\n";
    int history_marks = 0;
    cin >> history_marks;
    
    cout << "Enter marks of zoology" << "\n";
    int zoology_marks = 0;
    cin >> zoology_marks;
    
    int totle_maarks = maths_marks + sceince_marks + bilogy_marks + history_marks + zoology_marks;
    cout << "Totle Marks = " << totle_maarks << "\n";
    
    float percentage = totle_maarks / 5.0;
    cout << "Totle Percentage = " << percentage << "\n";
}
