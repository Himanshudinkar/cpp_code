#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    int i = 1;

    do
    {
        i = number * i;
        number--;
    } while (number > 0);

    cout << "factorial is = " << i;
    return 0;
    
}