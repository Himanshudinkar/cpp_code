#include <iostream>
using namespace std;
int main()
{
    float number1 = 0;
    float number2 = 0;

    cout << "Enter Number 1" <<"\n";
    cin >> number1;

    cout << "Enter Number 2" <<"\n";
    cin >> number2;

    if (number1 > number2)
    {
        cout << "Number 1 is greater\n";
    }
    else if (number1 == number2)
    {
        cout << "Number 1 and Number 2 is Equal\n";
    }
    
    else
    {
        cout << "Number 2 is greater";
    }
    return 0;

}