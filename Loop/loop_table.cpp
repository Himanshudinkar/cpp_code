// write a proggram to gebrate a table for any number;

#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number" << "\n";
    int n = 0;
    cin >> n;

    int i = 1;

    do
    {
        cout << n * i << "\t";
        i++;

    } while (i <= 10);
    
    return 0;
}