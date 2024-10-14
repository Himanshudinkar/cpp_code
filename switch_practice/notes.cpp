#include <iostream>
using namespace std;
int main()
{
    cout << "enter ammount" << "\n";
    int ammount = 0;
    cin >> ammount;

    int n1 = 0, n2 = 0, n5 = 0, n10 = 0, n20 = 0, n50 = 0, n100 = 0, n200 = 0, n500 = 0;

    if (ammount >= 500)
    {
        n500 = ammount / 500;
        ammount = ammount - n500 * 500;
    }
    if (ammount >= 200)
    {
        n200 = ammount / 200;
        ammount = ammount - n200 * 200;
    }
    if (ammount >= 100)
    {
        n100 = ammount / 100;
        ammount = ammount - n100 * 100;
    }
    if (ammount >= 50)
    {
        n50 = ammount / 50;
        ammount= ammount - n50 * 50;
    }
    if (ammount >= 20)
    {
        n20 = ammount / 20;
        ammount = ammount - n20 * 20;
    }
    if (ammount >= 10)
    {
        n10 = ammount / 10;
        ammount = ammount - n10 * 10;
    }
    if (ammount >= 5)
    {
        n5 =  ammount / 5;
        ammount = ammount - n5 * 5;
    }
    if (ammount >= 2)
    {
        n2 = ammount / 2;
        ammount = ammount - n2 * 2;
    }
    if (ammount >= 1)
    {
        n1 = ammount / 1;
        ammount = ammount - n1 * 1;
    }

    cout << "500 notes = " << n500 << "\n"; 
    cout << "200 notes = " << n200 << "\n"; 
    cout << "100 notes = " << n100 << "\n"; 
    cout << "50 notes = " << n50 << "\n"; 
    cout << "20 notes = " << n20 << "\n"; 
    cout << "10 notes = " << n10 << "\n"; 
    cout << "5 notes = " << n5 << "\n"; 
    cout << "2 notes = " << n2 << "\n"; 
    cout << "1 notes = " << n1 << "\n"; 

    return 0;
}