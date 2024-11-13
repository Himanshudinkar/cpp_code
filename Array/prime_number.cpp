//wap to display prime number given array input {7,4,6,11,5} output = 7,11,5
//2 wap to replace 1 with 0 in a givn array {2,1,3,1,5,1} output {2,0,3,0,5,0}

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7,4,6,11,5};
    int len = sizeof(arr) / sizeof(arr[0]);


    for (int i = 0; i < len; i++)
    {
        arr[i] = arr[i]-1;
        
        
    }
    
}