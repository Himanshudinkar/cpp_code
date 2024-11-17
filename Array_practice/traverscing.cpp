#include <iostream>
using namespace std;
int main()
{
    int arr[] = {34,54,2,45,3,6,9,1,};
    int len = sizeof(arr)/sizeof(arr[0]);

    //forword treversing

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
    
    cout << "\n";
    //backword treversing
    
    for (int j = len-1; j >= 0; j--)
    {
        cout << arr[j] << "\t";
    }
    
    return 0;
}