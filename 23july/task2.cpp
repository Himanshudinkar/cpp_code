#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number 1" << "\n";
    float number1 = 0;
    cin >> number1;
    cout << "Enter number 2" << "\n";
    float number2 = 0;
    cin >> number2;
    float result = number1 + number2;
    cout << "Result = " << result << "\n";
    bool finel_result = number1 != number2;
    cout << "Finel Result = " << finel_result;
    return 0;
}