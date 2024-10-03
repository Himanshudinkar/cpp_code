#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number for generate a table\n";
    int n = 0;
    cin >> n;

    int i = 1;

    int t = 0;

    while (i<=10)
    {
        t = n * i;
        cout << t << "\t";
        i++;
    }
    return 0;

    
}