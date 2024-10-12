#include <iostream>
using namespace std;
int main()
{
    cout << "enter base" << "\n";
    int base = 0;
    cin >> base;

    cout << "enter power" << "\n";
    int power = 0;
    cin >> power;

    int s = 1;

    do
    {
        s = s * base;
        power--;
    } while (power > 0);
    cout << "power is = " << s << "\n";

    return 0;
    
}