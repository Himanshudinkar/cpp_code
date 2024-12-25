// Write a C++ program to display table and factorial of any number using composite class.

// #include <iostream>
// using namespace std;

// class virus
// {
//     public: void affect()
//     {
//         cout << "ur hecked" << "\n";
//     }
// };

// class reward
// {
//     virus v;
//     public:void prize()
//     {
//         cout << "u won 200" << "\n";

//          v.affect();
//     }

   
// };

// int main()
// {
//     reward r;
//     r.prize();

//     return 0;
// }


#include <iostream>
using namespace std;

class table
{
    int i = 1;
    public : void tab(int n)
    {
        do
        {
            cout << n * i << "\t";
            i++;
        } while (i<=10);
        
    }
};

class factorial
{
    table t;

    int i = 1;
    public : void fact(int n)
    {
        t.tab(n);

        do
        {
            i = i * n;
            n--;
        } while (n>0);
        
        cout << "\n factorial is " << i << "\n";

       
    }
};

int main()
{
    cout << "enter a number" << "\n";
    int number = 0;
    cin >> number;

    factorial f;
    f.fact(number);

    return 0;

}