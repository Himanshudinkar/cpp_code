#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Reding " << "\n";
    int reding = 0;
    cin >> reding;

    int bill = 0;
    float sevice_charge = 0;

    if (reding >= 1 && reding <= 100) 
    {
        bill = reding * 3;
        sevice_charge = bill * 20/100;
        bill = bill + sevice_charge;
        cout << "Your Totle Bill is = " << bill << "\n"; 
    }
    else if (reding >= 101 && reding <= 200)
    {
        bill = reding * 5;
        sevice_charge = bill * 20/100;
        bill = bill + sevice_charge;
        cout << "Your Totle Bill is = " << bill << "\n"; 
    }
    else if (reding >= 201 && reding <= 500)
    {
        bill = reding * 7;
        sevice_charge = bill * 20/100;
        bill = bill + sevice_charge;
        cout << "Your Totle Bill is = " << bill  << "\n"; 
    }
    else if (reding > 500)
    {
        bill = reding * 10;
        sevice_charge = bill * 20/100;
        bill = bill + sevice_charge;
        cout << "Your Totle Bill is = " << bill << "\n"; 
    }
    else
    {
        sevice_charge = bill * 20/100;
        bill = bill + sevice_charge;
        cout << "INVALID REDING" << "\n";
    }
    return 0;
      
}
