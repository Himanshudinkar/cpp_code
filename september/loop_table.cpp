// write a proggram to gebrate a table for any number;

#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    int  i = 1;

    do
    {
        cout << number * i << "\t";
        i++;

    } while (i <= 10);
    
    return 0;
}