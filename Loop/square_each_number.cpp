#include <iostream>
using namespace std;
int main()
{
    int number = 1;

    do
    {
        cout << number*number << "\t";
        number++;
        
    } while (number <= 10); 
    return 0;
}