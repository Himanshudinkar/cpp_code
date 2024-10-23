/*
              A
            B A
          C B A
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
        for (int j = i; j >= 1; j--)
        {
            cout << char (j + 64);
        }
        cout << "\n";
    }
    return 0;
}