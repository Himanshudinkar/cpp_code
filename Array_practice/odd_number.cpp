#include <iostream>
using namespace std;
int main()
{
    int arr[] = {34,54,2,45,3,6,9,1,};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << "\t";
        }
        
    }
    
    return 0;
}