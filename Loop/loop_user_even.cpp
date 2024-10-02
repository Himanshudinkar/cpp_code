#include <iostream>
using namespace std;
int main()
{
    cout << "enter number 1\n";
    int number1 = 0;
    cin >> number1;

    cout << "enter number 2\n";
    int number2 = 0;
    cin >> number2;

    do
    {
        if (number1 % 2 == 0)
        {
            cout << number1 << "\t";
        }
        number1++;
        
    } while (number1 <= number2);
    
    return 0;
}