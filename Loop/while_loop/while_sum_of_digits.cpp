#include <iostream>
using namespace std;
int main()
{
    
    cout << "Enter Number" << "\n";
    int a = 0;
    cin >> a;

    int k = 0;
    int s = 0;

    while (a > 0)
    {
        k = a % 10;
        s = s + k;
        a = a / 10;
    }

    cout << s;
   return 0;
}