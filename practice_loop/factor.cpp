#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    int i = number;

    int c = 0;

    do
    {
        if (number % i == 0)
        {
            c++;
        }
        i--;
    } while (i >= 1);
    cout << "all facator is = " << c << "\n";

    return 0;
}