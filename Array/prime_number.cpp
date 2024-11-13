//wap to display prime number given array input {7,4,6,11,5} output = 7,11,5

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7,4,6,11,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int parr[];

    for (int i = 0; i < len; i++)
    {
        parr[i] = arr[i]-1;
        cout << parr[i];
    }
    
}