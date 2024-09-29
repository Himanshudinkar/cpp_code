#include <iostream>
using namespace std;
int main()
{
    int f = 1;
    int i = 1;

    do
    {
        i = f * i;
        f++;
    } while (i <= 10);
    cout << f << "\n";

    return 0;
    
}