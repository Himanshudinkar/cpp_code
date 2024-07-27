/*WAP  to find the greatest number from from two givin number.
number are given by user.
steps to solve the problem
step 1 - include header files
step 2 - using the std namespace
step 3 - declaring main method/function
step 4 - promt the user to enter number 1
step 5 - declare a variable to store the enterd value
step 6 - read the input and store the value in declared variable
step 7 - promt
step 8 - declare a variable
step 9 - read the value
step 10 - compare the enterd number by using if statment, 
          if number 1 is a greater than number 2, then step 11 otherwise step 12
step 11 - print number 1 is a greater than number 2
step 12 - print number 2 is a greater than number 1
step 13 - return 0          

*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Number One" << "\n";
    int number1 = 0;
    cin >> number1;

    cout << "Enter Number two" << "\n";
    int number2 = 0;
    cin >> number2;

    if (number1 > number2)
    {
        cout << "Number one = " << number1 << " is greater than number two = " << number2 << "\n";
    }
    else
    {
        cout << "Number two = "  << number2 << " is greater than number one = " << number1;
    }
    return 0;
}