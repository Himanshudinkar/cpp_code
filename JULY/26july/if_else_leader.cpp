#include <iostream>
using namespace std;
int main()
{
   int payment_per_day = 0; 
   cout << "Enter Your Per Day Payment" <<"\n";
   cin >> payment_per_day;

   // menu
   int month_number = 0;
   cout << "Plz Select Number of The Month To Calculate Salary" << "\n";
   cout << "1-for Jan" << "\n";
   cout << "2-for Fab" << "\n";
   cout << "3-for March" << "\n";
   cout << "4-for April" << "\n";
   cout << "5-for May" << "\n";
   cout << "6-for Jun" << "\n";
   cout << "7-for July" << "\n";
   cout << "8-for August" << "\n";
   cout << "9-for Septamber" << "\n";
   cout << "10-for October" << "\n";
   cout << "11-for November" << "\n";
   cout << "12-for december" << "\n";
   cin >> month_number;

   int nomber_of_days = 0;

   if (month_number == 1)
   {
     nomber_of_days = 31;
   }
   else if (month_number == 2)
   {
    nomber_of_days = 28;
   }
   else if (month_number == 3)
   {
    nomber_of_days = 31; 
   }
    else if (month_number == 4)
   {
    nomber_of_days = 30;
   }
    else if (month_number == 5)
   {
    nomber_of_days = 31;
   }
    else if (month_number == 6)
   {
    nomber_of_days = 30;
   }
    else if (month_number == 7)
   {
    nomber_of_days = 31;
   }
    else if (month_number == 8)
   {
    nomber_of_days = 31;
   }
    else if (month_number == 9)
   {
    nomber_of_days = 30;
   }
    else if (month_number == 10)
   {
    nomber_of_days = 31;
   }
    else if (month_number == 11)
   {
    nomber_of_days = 30;
   }
    else if (month_number == 12)
   {
    nomber_of_days = 31;
   }
   int salary = nomber_of_days * payment_per_day;
   cout << "Salary = " << salary << "\n";
    return 0;
}
