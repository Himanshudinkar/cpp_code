#include <iostream>
using namespace std;
int main()
{
    int arr [] = {7,4,6,11,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int y = 0; y < len; y++)
    {
        cout << arr[y] << "\t";
    }
    
    cout << "\n" << "prime numbers are" << "\n";

    for (int i = 0; i < len; i++)
    {
        int p = arr[i] - 1;

        bool f = false;

        do
        {
            if (arr[i] % p == 0)
            {
                f = true;
            }
            p--;
        } while (p > 1);
        
        if (f == false)
        {
            cout << arr[i] << "\t";
        }
        
        
    }
    
    return 0;

}