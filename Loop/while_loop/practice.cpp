#include <iostream>
using namespace std;
int main()
{
cout << "enter number to chake prime number" << "\n";
int number =  0;
cin >> number;

int i = number - 1;

bool f = true;

do
{
    if (number % i == 0)
    {
        f = false;
        break;
    }
    i--;
} while (i > 1);

if (f == true)
{
    cout << "prime number = " << i << "\n";
}
else
{
    cout << "not prime\n";
}
return 0;

}