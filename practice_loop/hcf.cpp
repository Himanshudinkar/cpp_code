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

    int r = 0;
    int i = 1;

    for (i; i <= number1 || i <= number2; i++)
    {
       
       if (number1 % i == 0 && number2 % i == 0)
       {
         r = i;
       }
       
    }
    cout << "hcf is = " << r;

    return 0;
}