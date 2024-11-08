#include <iostream>
using namespace std;
int main(){
    int arr [] = {10,34,87,24,85,23};

    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}