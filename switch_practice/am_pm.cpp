#include <iostream>
using namespace std;
int main()
{
    cout << "enter hours(0-23)" << "\n";
    int h = 0;
    cin >> h;

    cout << "enter minute(0-59)" << "\n";
    int m = 0;
    cin >> m;

    switch (h/12)
    {
        case 0:
        {
            cout << "hours" << h << ":" << m << "AM" << "\n";
            break;
        }
        case 1:
        {
            int k =(h-12) == 0?0:h;
            if (k == 0)
            {
                cout << "00:00" << "AM" << "\n";
            }
            else
            {
                cout << k-12 << ":" << "PM" << "\n";
            }
            break;
        }
        default:
        {
            cout << "invalid value";
            break;
        }
    }
    return 0;
}