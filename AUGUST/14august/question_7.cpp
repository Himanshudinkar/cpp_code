/*
Write a program to accept two integer numbers from user. 
And perform addition and substraction. Display the reuslts of the operation on console.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a First Integer number" << "\n";
    int first_number;
    cin >> first_number;

    cout << "Enter a second Integer Number" << "\n";
    int second_number;
    cin >> second_number;

    int addition = first_number + second_number;

    int substraction = first_number - second_number;

    cout << "Addition of two Number is = " << addition << "\n";
    cout << "Substraction of two Number is = " << substraction  << "\n";

    return 0;
}