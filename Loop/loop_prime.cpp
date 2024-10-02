// write a progrram to find out the given number is prime number or not

#include <iostream>
using namespace std;
int main(){
    cout << "Enter Number" << "'\n";
    int n = 0;
    cin >> n;

    int i = n-1;
    int c = 0;
    bool f = false;

    do
    {   
        if (n%i == 0)
        {
            f = true;
            break;
        }
        
        i--;

    } while (i>1);
    if (f == true)
    {
        cout << "not prime "<< "\n";
    }
    else
    {
        cout << "prime" << "\n";
    }
    return 0;
}