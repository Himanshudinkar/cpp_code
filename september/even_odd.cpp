#include <iostream>
using namespace std;
int main()
{
    cout << "enter a integer number" << "\n";
    int number = 0;
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Even Number" << "\n";
    }
    
    else
    {
        cout << "Odd Number";
    }
    return 0;
}