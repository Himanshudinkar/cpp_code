#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];
    int s = INT8_MAX;
    cout << "enter 6 value" << "\n";
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            
            cin >> arr[r][c];
        }
        
    }
    cout << "\n" << "after input" << "\n";

    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
           if (s > arr[r][c])
           {
              s = arr[r][c];
           }
           
        }
       
    }
     cout << s << "\n";
    return 0;
}