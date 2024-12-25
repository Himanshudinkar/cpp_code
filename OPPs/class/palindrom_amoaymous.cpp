//Write a C++ program to check whether a number is palindrome or not using anonymous class.
#include <iostream>
using namespace std;

class 
{
    int r = 0;
    int c = 0;
    public:void palin(int n)
    {
      int orginal = n;
       do
       {
        r = n % 10;
        c = c * 10 + r;
        n = n / 10;
       } while (n > 0);

       if (c == orginal)
       {
          cout << "palindrom number" << "\n";
       }
       else
       {
          cout << "not palindrom" << "\n";
       }
       
    }
}p;

int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    p.palin(number);

    return 0;
}