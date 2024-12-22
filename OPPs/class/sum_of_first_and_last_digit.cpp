// sum of first and last digit using function define and declare inside a class

#include <iostream>
using namespace std;

class sum_of_first_and_last_digit
{
    int first;
    int last;
  public: void sum(int n)
  {
    last = n % 10;

    do
    {
        first = n % 10;
        n = n/10;
    } while (n > 0);
    
    cout << "sum of " << first + last << "\n";
  }
};

int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    sum_of_first_and_last_digit num;
    num.sum(number);

    return 0;
}
