#include <iostream>
using namespace std;
int main()
{
    cout << "enter a year" << "\n";
    int year = 0;
    cin >> year;

   if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
   {
        cout << "Leap year" << "\n";
   }

   else
   {
    cout << "Not Leap Year";
   }
    return 0;
}