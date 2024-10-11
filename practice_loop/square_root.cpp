#include <iostream>
using namespace std;
int main()
{
    cout << "enter number to chake square root" << "\n";
    int number = 0;
    cin >> number;

    int i = 1;

    bool f;

    do
    {
        if (i * i == number)
        {
            f = true;
            break;
        }
        i++;
    } while (i <= number/2);

    if (f == true)
    {
        cout << "square of number is = " << i << "\n";
    }
    else
    {
        cout << "given number has not square root" << i << "\n";
    }
    return 0;
}