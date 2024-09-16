#include <iostream>
using namespace std;
int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;

    cout << "Enter Number 1" <<"\n";
    cin >> number1;

    cout << "Enter Number 2" <<"\n";
    cin >> number2;

    cout << "Enter Number 3" <<"\n";
    cin >> number3;

    cout << "Ebter Number 4" <<"\n";
    cin >> number4;

    bool equation_one = number1 < number2;
    cout << "Equation one" << equation_one <<"\n";

    bool equation_two = number3 > number4;
    cout << "Equation two" << equation_two <<"\n";

    bool result = equation_one && equation_two;
    cout << "Final Result =" << result <<"\n";

    return 0;

}