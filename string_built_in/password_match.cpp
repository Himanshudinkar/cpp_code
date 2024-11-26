#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    cout << "Enter Password" << "\n";
    char psw[20];
    cin >> psw;

    cout << "Enter confirm Password" << "\n";
    char cpsw[20];
    cin >> cpsw;

    //strcmp case sensetive
    if (strcmp(psw,cpsw) == 0)
    {
        cout << "Log in Successfull" << "\n";
    }
    else
    {
        cout << "Incorrect Password" << "\n";
    }

    //stricmp not case sensetive
    if (stricmp(psw,cpsw) == 0)
    {
        cout << "Log in Successfull" << "\n";
    }
    else
    {
        cout << "Incorrect Password" << "\n";
    }
    return 0;

}