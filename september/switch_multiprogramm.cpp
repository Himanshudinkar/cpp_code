// multiprogramm switch
#include <iostream>
using namespace std;
int main()
{
    cout << "Enterr Number 1" << "\n";
    int number1 = 0;
    cin >> number1;

    cout << "Enter Number 2" << "\n";
    int number2 = 0;
    cin >> number2;

    cout << "press 1 for swap" << "\n";
    cout << "press 2 for larg" << "\n";
    int calculation = 0;
    cin >> calculation;

    switch (calculation)
    {
    case 1:
    {
        int number3 = 0;
        number3 = number1;
        number1 = number2;
        number2 = number3;
        cout << "after swapped value of number1 = " << number1 << "\n";
        cout << "after swapped value of number2 = " << number2 << "\n";
        break;
    }
    case 2:
    {
        if (number1 > number2)
        {
            cout << "Number 1 is Greater" << "\n";

        }
        else
        {
            cout << "Number 2 is Greater" << "\n";
        }
        
        break;
    }
    default:
    {
        cout << "invalid option" << "\n";
        break;
    }
    }
    return 0;
}