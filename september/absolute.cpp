#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a integer Number" << "\n";
    int number = 0;
    cin >> number;

    if (number > 0)
    {
        cout << "It is Absolute Number";

    }
    else
    {
        cout << -(number) << " It is Absolute Number";
    }
    return 0;
}