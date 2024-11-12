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
  
  do
  {
    c = number % 10;
    r = r * 10 + c;
    number = number / 10;
  } while (number > 0);
  
    if (r == org)
    {
        cout << "p";
    }
    else
    {
        cout << "n";
    }
    return 0;
}