#include <iostream>
using namespace std;
int main()
{
    int number1 = 0;
    int number2 = 0;
    float number3 = 0;
    float number4 = 0;

    cout << "Enter Number1\n";
    cin >> number1;

    cout << "Enter Number2\n";
    cin >> number2;

    cout << "Enter Number3\n";
    cin >> number3;

    cout << "Enter Number4\n";
    cin >> number4;

    float totle_number_addition = number1 + number2 + number3 + number4;
    cout << "Totle Number =" << totle_number_addition <<"\n";

    float totle_number_subtraction = number1 - number2 - number3 - number4;
    cout << "totle Number =" << totle_number_subtraction <<"\n";

    float totle_number_multiplication = number1 * number2 * number3 * number4;
    cout << "totle Number =" << totle_number_multiplication <<"\n";

    float totle_number_division = number1 / number2 / number3 / number4;
    cout << "totle Number =" << totle_number_division <<"\n";

    int totle_number_modulo = number1 % number2;
    cout << "totle Number =" << totle_number_modulo <<"\n";

    return 0;
}