#include <iostream>
using namespace std;
int main()
{
    
    cout << "enter  a number" << "\n";
    int number = 0;
    cin >> number;

    int r = 0;
    int c = 0;

    int org = number;

   if (number >= 100 && number <= 999)
   {
     do
     {
        c = number % 10;
        r = r + (c*c*c);
        number = number / 10;
     } while (number > 0);
     
     if (r == org)
     {
        cout << "armstrong";
     }

     else
     {
        cout << "not armstrong";
     }
     
   }
   else
   {
    cout << "invalid number";
   }
    
    return 0;
}