#include <iostream>
using namespace std;
int main()
{
    cout << "enter a integer number1" << "\n";
    int number1 = 0;
    cin >> number1;

    cout << "enter a integer number2" << "\n";
    int number2 = 0;
    cin >> number2;

    if (number1 > number2)
    {
        cout << "Number 1 is large" << "\n";
    }
    
    else
    {
        cout << "Number 2 is large";
    }
    return 0;
}