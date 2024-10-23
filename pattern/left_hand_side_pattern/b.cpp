/*
              A
            B B
          C C C
*/

#include <iostream>
using namespace std;
int main()
{
    int r = 3;

    for (int i = 1; i <= r; i++)
    {
        for (int s = 3; s > i; s--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << char (i + 64);
        }
        cout << "\n";
    }
    return 0;
}