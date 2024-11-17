#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,1,3,1,5,1};
    int len = sizeof(arr) / sizeof((arr[0]));

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\n" << "after replace" << "\n";

    for (int j = 0; j < len; j++)
    {
        if (arr[j] == 1)
        {
            arr[j] = 0;
        }
     cout << arr[j] << "\t";
    }
    return 0;
}