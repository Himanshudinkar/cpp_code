/*
WAP to accept a number from user and
print positive if it is positive number
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a Number" << "\n";
    int number = 0;
    cin >> number;

    if (number > 0)
    {
        cout << "positive number";
    }
    return 0;
}
// class work