/*
Write a program to accept an integer from user and print even if the number is even, Otherwise print odd.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an Integer" << "\n";
    int number = 0;
    cin >> number;

    if ( number % 2 == 0)
    {
        cout << "even" << "\n";
    }
    else
    {
       cout << "odd" << "\n";
    }
    return 0;
}