/*wap programm to accept a number from user and chacke weather the given number is a two digits number and also in odd number */

#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    if (number >= 10 && number <= 99 )
    {
        if (number % 2 == 1)
        {
            cout << "given number is a two digits number and number is odd" << "\n";
        }
        
        
    }
    return 0;
    
}