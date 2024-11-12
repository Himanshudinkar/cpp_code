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

    int lcm = 0;

    for (int i = 1; i <= number1 || i <= number2; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            lcm = i;
        }       
    }
    lcm = (number1 * number2) / lcm;

    cout << "LCM of " << number1 << " and " << number2 << " = " << lcm << "\n";

    return 0;
}