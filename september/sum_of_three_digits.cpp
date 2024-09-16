#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Three Digits Value" << "\n";
    int a = 0;
    cin >> a; // given value 234

    int b,c,d,e;

    b = a / 100; // b = 2 bacha kyuki 100 se 234 ko bhag denge to 2 bar jayega yah roundfiger me value leta hai
    c = a % 100; // c = 34 bachega remender
    d = c / 10; // d = 3 
    e = c % 10; // e = 4 

    cout << b+d+e << " sum of three digits"; // yha c ko chhod kar jod lenge

    return 0;


}