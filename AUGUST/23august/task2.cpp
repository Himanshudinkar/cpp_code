#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a Number" << "\n";
    int number = 0;
    cin >> number;

    if (number % 5 == 0)
    {
        cout << "its dividsible" << "\n";
    }
    else
    {
        int reminder = number % 5;
        int result = 5 - reminder;
        cout << "Add" << result << "\n";
        cout << "to number, to make it divisible by 5" << "\n";
    }
    return 0;
}