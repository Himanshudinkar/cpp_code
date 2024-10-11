#include <iostream>
using namespace std;
int main()
{
    cout << "enter number 1 to start tha sum" << "\n";
    int number1 = 0;
    cin >> number1;

    cout << "enter number 2 to end the sum" << "\n";
    int number2 = 0;
    cin >> number2 ;

    int sum = 0;

    do
    {
        sum = number1 + sum;
        number1++;
        
    } while (number1 <= number2);
    
    cout << "the sum of every number given you = " << sum << "\n";

    return 0; 
}