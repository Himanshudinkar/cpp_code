//wap to display the sqare root of valid number
#include <iostream>
using namespace std;
int main(){
    cout << "Enter Number" << "'\n";
    int n = 0;
    cin >> n;

    int i = 1;
    int c = 0;
    bool f = false;

    do
    {
        if (i * i == n)
        {
            f = true;
            break;
        }
        i++;
        c++;
        
    } while (i<=n/2);
    if (f == true)
    {
        cout << "valid square = " << i << "\n";
    }
    else
    {
        cout << "invalid square" << "\n";
    }
    cout << "counting = " << c;
    return 0;
}