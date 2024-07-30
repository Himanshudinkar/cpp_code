/*
Write a program to accept three numbers from user and print equals if the numbers are equal.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter First Number" << "\n";
    int first_number = 0;
    cin >> first_number;

    cout << "Enter Second number" << "\n";
    int second_number = 0;
    cin >> second_number;

    cout << "Enter Third Number" << "\n";
    int third_number = 0;
    cin >> third_number;

    int number = first_number = second_number;

    if (number == third_number)
    {
        cout << "equals";
    }
    return 0;

}