#include <iostream>
using namespace std;
int main()
{
    cout << "enter number 1" << "\t";
    int n1 = 0;
    cin >> n1;

    int i = 0;

    while (n1 <= 10)
    {
        i = n1 + i;
        n1++;
    }
    cout << i;
    
    return 0;
    
}