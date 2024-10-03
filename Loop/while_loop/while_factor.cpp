#include <iostream>
using namespace std;
int main()
{
    cout << "enter number\n";
    int a = 0;
    cin >> a;

    int c=0;
    int k=a;

    while (k>=1)
    {
        if (a%k == 0)
        {
            c++;
        }
        k--;
    }
    cout << "factor " << c;
    return 0;
}