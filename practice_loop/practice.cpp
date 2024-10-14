#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    int i = number - 1;

    int s = 0;

    do
    {
        if (number % i == 0)
        {
            s = s + i;
        }
        i--;
    } while (i>=1);

    if (s == number)
    {
        cout << "perfect number";
    }
    else
    {
        cout << "not perfect number";
    }
    return 0;
}