/*
Ravi and Shyam were playing a game. In the first turn of the game, 
Ravi will give an integer dividend and an integer divisor to Shyam. 
Then Shyam has to tell him the remainder of the division. In the second turn, 
Shyam will repeat the procedure.

To help them, please write a program that accepts Dividend, 
and Divisor from the user and print the remainder on the console. 
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter dividend" << "\n";
    int dividend = 0;
    cin >> dividend;

    cout << "Enter divisior" << "\n";
    int divisior = 0;
    cin >> divisior;

    int reminder = dividend % divisior;

    cout << "reminder is = " << reminder << "\n"; 

    return 0;
}