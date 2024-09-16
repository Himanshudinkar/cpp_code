/*
Write a program that prompts the user to enter the speed of a vehicle. 
If speed is less than 20, display too slow; if speed is greater than 80, 
display too fast; but alwyas display drive safe.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the speed of a vehicle" << "\n";
    int speed = 0;
    cin >> speed ;

    if (speed < 20)
    {
        cout << "too slow" << "\n";

    }
    else if (speed > 80)
    {
        cout << "too fast" << "\n";
    }
    cout << "drive safe" << "\n";
    return 0;
    
}