#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    if (number > 100)
    {
        cout << "greater than 100" << "\n";
    }
    else 
    {
        cout << "less than 100" << "\n";
    }
    return 0;
}