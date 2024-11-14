// wap to find valid square root of numbers in a given array input arr[] = {64,24,81,312,25,121,76}
//output : 64,81,5,121

#include <iostream>
using namespace std;
int main(){
    int arr [] = {64,24,81,312,25,121,76};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
    
        do
    {
        if (j * j == arr[i])
        {
          cout << "square of number is = " << arr[i] << "\n";
        }
        j++;
    } while (j <= arr[i]/2);
    }
    return 0;
}

