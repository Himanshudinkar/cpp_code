#include <iostream>
using namespace std;

int main() {
    int r = 5;
    int a=1,k=0,d;
    for (int i = 1; i <= r; i++)
     {
        for (int s = r; s > i; s--) 
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
         {
           d=a;
           a=k;
           k=d;
           cout << d << " ";
        }
        cout << "\n";
    }

    return 0;
}