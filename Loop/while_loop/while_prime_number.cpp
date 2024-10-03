#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number\n";
    int prime = 0;
    cin >> prime;

    int r = prime - 1;
    int f = 10;

    while (r > 1)
    {
        if (prime % r == 0)
        {
            f = 0;
            break;
        }
        r--;
        
    }
    if (f == 0)
    {
        cout << "not prime\n";
    }
    else
    {
        cout << "prime\n";
    }
    return 0;
}