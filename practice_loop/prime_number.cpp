#include <iostream>
using namespace std;
int main()
{
    cout << "enter number to checke prime number" << "\n";
    int number = 0;
    cin >> number;

    int i = number - 1;

    bool f;

    do
    {
        if (number % i == 0)
        {
            f = true;
            break;
        }
        i--;
        
    } while (i > 1);

    if (f == false)
    {
        cout << "prime number" << "\n";
    }
    else
    {
        cout << "not prime number" << "\n";
    }

    return 0;
    
    
}