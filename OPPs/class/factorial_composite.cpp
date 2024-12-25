// Write a C++ program to display table and factorial of any number using composite class.

#include <iostream>
using namespace std;

class virus
{
    public: void affect()
    {
        cout << "ur hecked" << "\n";
    }
};

class reward
{
    virus v;
    public:void prize()
    {
        cout << "u won 200" << "\n";

         v.affect();
    }

   
};

int main()
{
    reward r;
    r.prize();

    return 0;
}