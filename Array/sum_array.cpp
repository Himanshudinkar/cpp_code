#include <iostream>
using namespace std;
int main(){
    int arr [] = {19,8,4,5,6};
    int s = INT8_MAX;
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (s > arr[i])
        {
            s = arr[i];
        }
        
    }
    cout << s << "\t";
    return 0;
}