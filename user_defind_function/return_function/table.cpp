// #include <iostream>
// using namespace std;

// void table(int t, int i){
//     do
//     {
//         cout << t * i << "\t";
//         i++;

//     } while (i <= 10);
// }
// int main()
// {
//     cout << "enter number to genrate table" << "\n";
//     int t = 0;
//     cin >> t;

//     int i = 1;

//     table(t,i);
// }

#include <iostream>
using namespace std;

int table(int t, int i)
{

    return t * i;
}
    
int main()
{
    cout << "enter number to genrate table" << "\n";
    int t = 0;
    cin >> t;

    int i = 1;
    
        do
    {
        cout << table(t,i) << "\t";
        i++;

    } while (i <= 10);
}