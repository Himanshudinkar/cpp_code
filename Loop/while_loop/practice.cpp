#include <iostream>
using namespace std;
int main()
{
    cout << "enter number 1" << "\t";
    int n1 = 0;
    cin >> n1;

    cout << "enter num,ber 2" << "\t";
    int n2 = 0;
    cin >> n2;

    while (n1 <= n2)
    {
        if (n1 % 2 == 0)
        {
            cout << "even number = "<< n1<<"\n";
        }
        else if (n1 % 2 != 0)
        {
            cout << "odd number = "<< n1;
        }
        
        n1++;
    }
    return 0;
    
}