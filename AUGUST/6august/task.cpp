#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;


    if (number >=  0)
    {
        if (number % 3 == 0 && number % 5 == 0)
        {
            cout << "quatint = " << number / 3 << number / 5  << "\n";
            cout << "reminder is = "<< number % 3 << number % 5 << "\n";
        }
        
    }
    else
    {
        cout << "calculation not possible" << "\n";
    }
    return 0;
}
