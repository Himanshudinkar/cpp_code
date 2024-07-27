/*
WAP to accept a number from user,
and check weather the number is divisible by 7;
if yes print completly divisible by 7
otherwise not divisibvle by 7
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a Number" << "\n";
    int number = 0;
    cin >> number;

    if (number % 7 == 0 )
    {
        cout << "completly divisible by 7" << "\n";
    }
    else
    {
        cout << "not divisible by 7" << "\n";
    }
    return 0;
}