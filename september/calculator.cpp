// Write a C++ program that takes two numbers and an   
// operator (+, -, *, /) as input from the user and performs the appropriate 
// calculation based on the operator.

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter  Number 1" << "\n";
    float number1 = 0;
    cin >> number1;

    cout << "Enter Number 2" << "\n";
    float number2 = 0;
    cin >> number2;

    cout << "Adition press 1" << "\n";
    cout << "substraction press 2" << "\n";
    cout << "multiplication press 3" << "\n";
    cout << "Division press 4" << "\n";
    float result = 0;
    cin >> result;

    if (result == 1)
    {
         result = number1 + number2;
         cout << "Your Result is = " << result << "\n";
    }

    else if (result == 2)
    {
        result = number1 - number2;
        cout << "Your Result is = " << result << "\n";
    }

    else if (result == 3)
    {
        result = number1 * number2;
        cout << "Your Result is = " << result << "\n";
    }

    else if (result == 4)
    {
        result = number1 / number2;
        cout << "Your Result is = " << result << "\n";
    }

    return 0;  
}