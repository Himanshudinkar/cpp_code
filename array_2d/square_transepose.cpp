#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout << "enter size of row\n";
    cin >> x;
    cout << "enter size of column\n";
    cin >> y;
    int arr[x][y];
    cout << "enter" << x*y << "value\n";

    for (int r = 0; r < x ; r++)
    {
        for (int c = 0; c < y; c++)
        {
            cin >> arr[r][c];
        }
        
    }
    
    for (int r = 0; r < x; r++)
    {
        for (int c = 0; c < y; c++)
        {
            cout << arr [r][c] <<"\t";
        }
        cout << "\n";
    }

    if (x == y)
    {
    cout << "\n after applying transepose concept \n";

    for (int c = 0; c < x; c++)
    {
        for (int r = 0; r < y; r++)
        {
            cout << arr [r][c] <<"\t";
        }
        cout << "\n";
    }
    }
    
    else
    {
        cout << "not allowed bcz row and column size are note equale" << "\n";
    }

    return 0;
}