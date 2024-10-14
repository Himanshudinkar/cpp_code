#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    int c = 0;

    do
    {
        if (number % 10 >= 0)
        {
            c++;
        }
        number = number/10;
    } while (number > 0);
    
    cout << c;
    return 0;
    
}