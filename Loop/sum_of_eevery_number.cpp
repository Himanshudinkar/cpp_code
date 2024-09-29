#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    int i = 0;

    do
    {
        i = n + i;
        n++;
    } while (n <= 10);
    cout << i << "\n";
    return 0;
}