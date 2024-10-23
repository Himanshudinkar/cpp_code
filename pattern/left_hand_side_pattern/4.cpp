/*
              1
            2 1
          3 2 1
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
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}