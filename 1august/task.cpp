#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number" << "\n";
    int number = 0;
    cin >> number;

    int digit_number1 = 0;
    int digit_number2 = 0;

    digit_number1 = number % 10;
    number = number /  10;
    digit_number2 = number % 10;
    
 if (number >= 10 && number <= 99 )
    
    {

        if (digit_number1 == digit_number2)
        {
            cout << "its doble digits number" << "\n";
        }
    }
        else
        {
            cout << "its not doble digits number" << "\n";
        }
    

    return 0;


}