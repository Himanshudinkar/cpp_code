#include <iostream>
using namespace std;
int main()
{
    int a = 1;

    while (a<=20)
    {
        if (a % 5 == 0)
        {
            cout << a << "\t";
        }
        a++;
        
    }
    return 0;
    
}