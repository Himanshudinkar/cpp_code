#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    int i = 1;

    bool f = false;

    do
    {
        if (i * i  == number)
        {
            f = true;
            break;
        }
        i++;
    } while (i <= number/2);

    if (f == true)
    {
        cout << "square root is " << i << "\n";
    }
    else
    {
        cout << "square root not possible" << "\n";
    }
    return 0;
}