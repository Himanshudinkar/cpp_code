#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    int s = 0;

    while (number > 0)
    {
        s = number % 10;
        cout << s;
        number = number / 10;
    }
    return 0;
    
}