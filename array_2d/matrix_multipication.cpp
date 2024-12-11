// marix multipication me pahle array ki column  or dusre aarry ka row same hona chiye he tabhi y 
//chalega nhai to galat ho jayega 
//isme multiplication ese hoga jese pahli row ki value se dusre array ki row se hoga

#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cout << "enter size of row 1" << "\n";
    cin >> r1;

    cout << "enter size of column 1" << "\n";
    cin >> c1;

    cout << "enter size of row 2" << "\n";
    cin >> r2;

    cout << "enter size of column 2" << "\n";
    cin >> c2;

    if (c1 == r2)
    {
        int A[r1][c1];
        int B[r2][c2];
        int ans[r1][c2];
        int s = 0;

        cout << "enter =" << r1*c1 << "values of array 1" << "\n";

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> A[i][j];
            }
            
        }

        cout << "\n";

        cout << "\n enter = " << r2*c2 << "values of array 2" << "\n";

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                    cin >> B[i][j];
                
            }
            
        }
        
        cout << "\n data of array 1 is\n";

         for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << A[i][j] << "\t";
            }
            cout << "\n";
        }

        cout << "\n data of array 2 is\n";

         for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << B[i][j] << "\t";
            }
            cout << "\n";
        }

       cout << "\n";

       for (int i = 0; i < r1; i++)
       {
          s=0;
          for (int j = 0; j < c2; j++)
          {
            for (int k = 0; k < c1; k++)
            {
                s = s + A[i][k] * B[k][j];
                ans[i][j] = s;
            }
            
          }
          
       }

       cout << "\n multiplication of matrix \n";

       for (int i = 0; i < r1; i++)
       {
        for (int j = 0; j < c2; j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << "\n";
       }
       
       
        
    }

    else
    {
        cout << "matrix multiplication not possible" << "\n";
    }
    return 0;

}