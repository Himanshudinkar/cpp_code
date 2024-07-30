/*
Write a program to accept an integer from user. 
If the number is even make it odd and print. 
If the number is odd make it even and print.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an Integer" << "\n";
    int number = 0;
    cin >> number;

    if ( ! (number % 2 == 0))
    {
        cout << "even" << "\n";
    }
    else
    {
       cout << "odd" << "\n";
    }
    return 0;
}