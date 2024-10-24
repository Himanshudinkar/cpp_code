#include <iostream>
using namespace std;

int main() {
    int r = 5;

    for (int i = 1; i <= r; i++)
     {
        for (int s = r; s > i; s--) 
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
         {
            if (j % 2 == 0)
                cout << "0";
            else
                cout << "1";
        }
        cout << "\n";
    }

    return 0;
}