#include <iostream>
using namespace std;
int main()
{
    cout << "enter number" << "\n";
    int number = 0;
    cin >> number;

    int k = number - 1;

    int c = 0;

    while (k >= 1)
    {
        if (number % k == 0)
        {
            c = c+k;
        }
        k--;
    }
    if (c == number)
    {
        cout << "it is perfect number\n";
    }
    else
    {
        cout << "not perfect number\n";
    }
    return 0;

} 