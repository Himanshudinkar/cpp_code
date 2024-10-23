/*
   A
   A B
   A B C
*/

#include <iostream>
using namespace std;
int main()
{
    int r = 3;
    int c = 3;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(j + 64);
        }
        cout << "\n";
    }
    return 0;
}