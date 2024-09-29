// wap to chake password and otp using nested if else

#include <iostream>
using namespace std;
int main()
{
    cout << "enter password" << "\n";
    int pwd = 0;
    cin >> pwd;

    if (pwd == 2025)
    {
        cout << "enter otp" << "\n";
        int otp = 0;
        cin >> otp;

        if (otp == 2002)
        {
            cout << "u r owner" << "\n";
        }
        
    }

    else
    {
        cout << "u r froud" << "\n";
    }

    return 0;
    
}