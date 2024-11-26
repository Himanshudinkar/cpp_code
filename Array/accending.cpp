#include <iostream>
using namespace std;
int main(){
    int arr [] = {19,8,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
    
    cout << "\n output \n";

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            int tmp;
            if (arr[j] > arr[j+1])
            {
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
            
        }
        
    }
    
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
    
    return 0;
}