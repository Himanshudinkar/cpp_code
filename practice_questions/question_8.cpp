/*
Write a program to accept two numbers from user, if the both the numbers are positive, 
get the remainder of the division by 5 for both the numbers.
If remainder of both the division are equal print numbers are equal, 
otherwise number are not equal. If one or both the numbers are negative, print calculation not possible.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter First Number" << "\n";
    int first_number = 0;
    cin >> first_number;

    cout << "Enter Second Number" << "\n";
    int second_number = 0;
    cin >> second_number;

    int first_reminder = first_number % 5;
    int second_reminder = second_number % 5;

    if (first_reminder == second_reminder)
    {
        cout << "number are equal" << "\n";
    }
    else
    {
        cout << "Calculation not possible" << "\n";
    }
    return 0;    
}