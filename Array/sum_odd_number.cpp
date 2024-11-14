//wap to find out the sum of all the odd number in given array

#include <iostream>
using namespace std;
int main(){
    int arr [] = {19,8,4,5,6,3,10,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 != 0)
        {
            s = s + arr[i];  
        }
        
    }
     cout << s <<"\n";
    return 0;
}