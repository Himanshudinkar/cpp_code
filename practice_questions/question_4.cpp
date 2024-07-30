/*
 Write a program to accept three numbers from user and print all are divisible by 9, 
 if all three numbers are divisible by 9.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter First Number" <<"\n";
    int first_number = 0;
    cin >> first_number;

    cout << "Enter Second Number" << "\n";
    int second_number = 0;
    cin >> second_number;

    cout << "Enter Third number" << "\n";
    int third_number;
    cin >> third_number;

   if (first_number && second_number && third_number % 9 == 0)
   {
        cout << "all are divisible by 9" << "\n";
   }
    return 0;
}