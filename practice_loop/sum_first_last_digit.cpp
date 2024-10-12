#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    int first = 0;
    int last = 0;

    last = number % 10;

    while (number > 0)
    {
        first = number % 10;
        number = number / 10;
    }
    cout << "sum of first and last digit = " << first + last << "\n";

    return 0;
    
}