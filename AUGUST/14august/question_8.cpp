/*
Write a program to accept two floating point numbers from user. 
And perform multiplication and division on the numbers. Display the result on console.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a First Integer number" << "\n";
    float first_number;
    cin >> first_number;

    cout << "Enter a second Integer Number" << "\n";
    float second_number;
    cin >> second_number;

    float multiplication = first_number * second_number;

    float division = first_number / second_number;

    cout << "Multiplication  of two Number is = " << multiplication << "\n";
    cout << "Division of two Number is = " << division  << "\n";

    return 0;
}