#include <iostream>
using namespace std;
int main()
{
    cout << "enter no to generate factorial\n";
    int f = 0;
    cin >> f;

    int i = 1;

    do
    {
        i = f * i;
        f--;
    } while (f >= 1);
    cout << i << "\n";

    return 0;
    
}
