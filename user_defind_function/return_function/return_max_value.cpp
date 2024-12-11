#include <iostream>
using namespace std;

int largest( int num1,int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
    
}
int main()
{
    cout << "enter number 1" << "\n";
    int num1 = 0;
    cin >> num1;

    cout << "enter number 2" << "\n";
    int num2 = 0;
    cin >> num2;
    
    cout << "largest value is = " << largest(num1,num2);
}