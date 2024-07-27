#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number 1" <<"\n";
    int number1 = 0;
    cin >> number1;
    cout << "Enter Number 2" <<"\n";
    int number2 = 0;
    cin >> number2;
    if (number1 > number2)
    {
        cout << "Number 1 = " << number1 << " is greater than number 2 = " << number2 << "\n";
    }
    else if (number1 == number2)
    {
        cout << "Number 1 = " << number1 << " and" << " Number 2 = " << number2 << " is equal" << "\n";
    }
    else
    {
        cout << "Number 2 = " << number2 << " is greater than number 1 = " << number1;
    }
    return 0;
}