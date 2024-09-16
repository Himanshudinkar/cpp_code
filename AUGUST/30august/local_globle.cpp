#include <iostream>
using namespace std;
int a = 80;
int f = 70;
int main()
{
    int a = 90;
    cout << "local = " << a << "\n";  
    cout << "globel = " << ::a << "\n";
     cout << "f = " << f << "\n";
    return 0;
}
/*

*/