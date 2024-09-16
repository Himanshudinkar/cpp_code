#include <iostream>
using namespace std;
int main()
{
    int number1 = 0;
    int number2 = 0;

    cout << "enter an integer number\n";
    cin >> number1;
    cout << "enter an integer number\n";
    cin >> number2;
    
    bool result = number1 > number2;
    cout << "result =" << result <<"\n";

     
    int reminder_result = number1 % number2;
    cout << "Reminder Result =" << reminder_result;
   
    return 0;

}