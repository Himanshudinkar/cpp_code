/*
   1
   2 3
   4 5 6
*/

#include <iostream>
using namespace std;
int main()
{
    int r = 3;
    int num = 1;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << num;
            num++;
        }
        cout << "\n";
    }
    return 0;
}
