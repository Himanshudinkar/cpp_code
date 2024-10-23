/*
   A
   B C
   C D E
*/

#include <iostream>
using namespace std;
int main()
{
    int r = 3;
    char c = 'A';

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << "\n";
    }
    return 0;
}