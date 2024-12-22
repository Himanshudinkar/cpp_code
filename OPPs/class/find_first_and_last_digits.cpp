//Write a C++ program to find first and last digit of a number using function define outside of class.
#include <iostream>
using namespace std;

class find_first_and_last_digits
{
 int first,last;
 public: void digits(int n);

};

void find_first_and_last_digits :: digits(int n)
{
    last = n % 10;

    do
    {
        first = n % 10;
        n = n / 10;
    } while (n > 0);

    cout << "First =" << first << "\n";
    cout << "last =" << last << "\n";
    
}

int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    find_first_and_last_digits find;
    find.digits(number);

    return 0;
}

