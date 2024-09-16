/*
Write a C++ function that takes an integer as input and prints whether the number is "Even" or "Odd".
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a Integer" << "\n";
    int integer = 0;
    cin >> integer;

    if (integer % 2 == 0)
    {
        cout << "Number is even" << "\n";
    }
    else if (integer % 2 == 1)
    {
        cout << "Numver is Odd" << "\n";
    }
    return 0;
}