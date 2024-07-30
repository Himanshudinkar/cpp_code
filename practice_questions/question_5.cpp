/*
Write a program to accept an integer from user and print positive, 
if the number is positive. Otherwise, print negative. 
Considering number can never be equal to zero.
*/
# include <iostream>
using namespace std;
int main()
{
    cout << "Enter an Integer Number" << "\n";
    int number = 0;
    cin >> number;

    if (number >= 1)
    {
        cout << "positive" << "\n";
    }
    else
    {
        cout << "negative" << "\n";
    }
    return 0;
}