//palindrom matlab ulta padho ya sidha en jesa hoga jese nitin,jahaj,
#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char name[20];
    cout << "enter name" << "\n";
    cin >> name;

    char surname[20];

    strcpy(surname,name);

    cout << "\n";

    strrev(surname);

    if (strcmp(surname,name)== 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}