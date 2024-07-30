/*
Write a program that accept two numbers from the user and print equals if the numbers are equal.
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

    if (first_number == second_number)
    {
        cout << "equals" << "\n";
    }
    return 0;
}