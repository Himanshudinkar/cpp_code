#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7,5,6,8,11,92,18,19};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "array like" << "\n";

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\n prime number \n";

    for (int j = 0; j < len; j++)
    {
        int p = arr[j] - 1;
        bool f = false;

        do
        {
            if (arr[j]%p == 0)
            {
                f = true;
            }
            p--;
            
        } while (p > 1);

        if (f == false)
        {
            cout << arr[j] << "\t";
        }
        
       
    }
     return 0;
    
}