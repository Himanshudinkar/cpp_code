#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,0,7,0,3,0,6};
    int len = sizeof(arr) / sizeof((arr[0]));

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\n" << "after shift" << "\n";

    for (int i = 0; i < len; i++)
    {
        if (arr[i] != 0)
        {
            
        }
        
    }
    