#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    if (number % 5 == 0)
    {
        cout << "its dividible" << "\n";
    }
    else
    {
        cout << "not divisible" << "\n";
    }
}