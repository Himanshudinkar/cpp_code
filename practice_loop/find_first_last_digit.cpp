#include <iostream>
using namespace std;
int main()
{
    cout << "enter number" << "\n";
    int number = 0;
    cin >> number;

    int first = 0;
    int last = 0;

    last = number % 10;

    do
    {
        first = number % 10;
        number = number / 10;

    } while (number > 0);

    cout << "first digit is = " << first << "\n";
    cout << "last digit is = " << last << "\n";

    return 0;
    
}