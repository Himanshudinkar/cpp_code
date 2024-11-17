#include <iostream>
using namespace std;
int main()
{
    int arr[] = {34,43,7,2,54,12,5,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int m = INT8_MIN;

    for (int i = 0; i < len; i++)
    {
        if (m < arr[i])
        {
            m = arr[i];
        }
        
    }
    cout << m << "\n";

    return 0;

}