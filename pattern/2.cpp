/*
     1
     1 2
     1 2 3
*/

#include <iostream>
using namespace std;
int main()
{
    int r = 3;
    int c = 3;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}
