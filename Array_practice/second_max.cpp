#include  <iostream>
using namespace std;
int main()
{
    int arr[] = {23,54,2,4,1,34,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    int first = INT8_MIN;
    int second = INT8_MIN;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) 
        {
            second = arr[i];
        }
        
    }
    cout << second;

    return 0;
}