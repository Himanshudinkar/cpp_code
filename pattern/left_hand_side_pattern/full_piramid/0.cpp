
#include <iostream>
using namespace std;
int main()
{
    int r = 5;

    for (int i = 1; i <= r; i++)
    {
        for (int s = 5; s > i; s--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}