// swap three variable 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5; 
//     int b = 10; 
//     int c = 0;

//     c = a;
//     a = b;
//     b = c;

//     cout << "a = " << a << ", b = " << b << "\n";

//     return 0;
// }

//swap two variable

#include <iostream>
using namespace std;
int main()
{
    int a = 3; 
    int b = 10; 

    a = a+b;
    b = a-b;
    a = a-b;

    cout << "a = " << a << ", b = " << b << "\n";

    return 0;
}
