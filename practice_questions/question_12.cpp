/*
Write a program to accept birth year of user in YYYY format (like 1983) and print the chinese zodiac of the user.
Chinese zodiac is represented by an animal sign as follows:
0: monkey
1: rooster
2: dog
3: pig
4: rat
5: ox
6: tiger
7: rabbit
8: dragon
9: snake
10: horse
11: sheep
To get the corresponding value modulo-division year by 12
*/
#include <iostream>
using  namespace std;
int main()
{
    cout << "Enter Your Birth Year in YYYY Format" << "\n";
    int birth_year = 0;
    cin >> birth_year;

    if (birth_year  % 12 == 0)
    {
        cout << "Monkey" << "\n";
    }
    else if (birth_year % 12 == 1)
    {
        cout << "rooster" << "\n";
    }
    else if (birth_year % 12 == 2)
    {
        cout << "dog" << "\n";
    }
     else if (birth_year  % 12 == 3)
    {
        cout << "pig" << "\n";
    }
     else if (birth_year  % 12 == 4)
    {
        cout << "rat" << "\n";
    }
     else if (birth_year  % 12 == 5)
    {
        cout << "ox" << "\n";
    }
     else if (birth_year % 12 == 6)
    {
        cout << "tiger" << "\n";
    }
     else if (birth_year  % 12 == 7)
    {
        cout << "rabbit" << "\n";
    }
     else if (birth_year % 12 == 8)
    {
        cout << "dragon" << "\n";
    }
     else if (birth_year % 12 == 9)
    {
        cout << "snack" << "\n";
    }
     else if (birth_year % 12 == 10)
    {
        cout << "horse" << "\n";
    }
     else if (birth_year  % 12 == 11)
    {
        cout << "sheep" << "\n";
    }

    return 0;

}