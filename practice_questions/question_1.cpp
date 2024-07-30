/*
 Write a program that accept an integer form user and print positive, if the integer is positive.
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an Integer Number" << "\n";
    int number = 0;
    cin >> number;

    if (number > 0)
    {
        cout << "psitive" << "\n";
    }
    return 0;
}