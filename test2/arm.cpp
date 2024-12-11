#include <iostream>
using namespace std;

void run(int arr[], int len)
{
    for (int i = 0; i < len; i++) 
    {
        int s = 0;               
        int c = 0;               
        int num = arr[i];      
        
   
        while (num > 0) 
        {
            c = num % 10;         
            s = s + (c * c * c); 
            num = num / 10;     
        }

      
        if (s == arr[i])
        {
            cout << arr[i] << "\t";
        }
    }
}

int main()
{
    cout << "Enter size of array: "; 
    int len = 0;
    cin >> len;

    cout << "Enter " << len << " elements:" << "\n";
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    run(arr, len); 

    return 0;
}
