#include <iostream>
using namespace std;
int main()
{
    cout << "enter number" << "\n";
    int number = 0;
    cin >> number;

    int s = 0;
    int c = 0;

    for (number; number > 0; number = number/10)
    {
        s = number % 10;
        c = c + s;
    }
    cout << "sum of digits is = " << c << "\n";

    return 0;
}