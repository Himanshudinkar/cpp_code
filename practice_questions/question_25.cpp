/*
Write a C++ function that takes an integer representing age and classifies the person into 
one of the following categories:

"Child" (0-12)
"Teenager" (13-19)
"Adult" (20-64)
"Senior" (65 and above)
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your Age" << "\n";
    int age = 0;
    cin >> age;

    if (age <= 12)
    {
        cout << "Your age is = " << age << " You are Child" << "\n";
    }
    else if (age >= 13 && age <= 19)
    {
        cout << "Your age is = " << age << "You are Teenager" << "\n";
    }
    else if (age >= 20 && age <= 64)
    {
        cout << "Your age is = " << age << "You are Adult " << "\n";
    }
    else if (age >= 65)
    {
        cout << "Your age is = " << age << "You are Senior" << "\n";
    }
    return 0;
}