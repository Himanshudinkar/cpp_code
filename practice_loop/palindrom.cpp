#include <iostream>
using namespace std;
int main()
{
    cout << "enter number" << "\n";
    int number = 0;
    cin >> number;

    int c = 0;
    int r = 0;
    int org = number;

    do
    {
        c = number % 10;
        r = r * 10 + c;
        number = number / 10;
    } while (number > 0);
    
    if (r == org)
    {
        cout << "palindrom number " << r << "\n";
    }
    else 
    {
        cout << "not palindrom " << r << "\n";
    }
    return 0;
}