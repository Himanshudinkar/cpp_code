#include <iostream>
using namespace std;
int main()
{
    cout << "enter number 1" << "\n";
    int number1 = 0;
    cin >> number1;

    cout << "enter number 2" << "\n";
    int number2 = 0;
    cin >> number2;

    cout << "press 1 for addition" << "\n";
    cout << "press 2 for substraction" << "\n";
    cout << "press 3 for multiplication" << "\n";
    cout << "press 4 for division" << "\n";
    int totel = 0;
    cin >> totel;

    switch (totel)
    {
    case 1:
    {
        totel = number1 + number2;
        cout << "Result is = " << totel << "\n";
        break;
    }
    case 2:
    {
        totel = number1 - number2;
        cout << "Result is = " << totel << "\n";
        break;
    }
    case 3:
    {
        totel = number1 * number2;
        cout << "Result is = " << totel << "\n";
        break;
    }
    case 4:
    {
        totel = number1 / number2;
        cout << "Result is = " << totel << "\n";
        break;
    }
    default:
        {
            cout << "invalid coice" << "\n";
        }
    }
    return 0;

}
