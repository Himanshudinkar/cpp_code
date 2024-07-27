#include <iostream>
using namespace std;
int main()
{
    int peace =0;
    int defected_peace =0;
  

    cout << "Enter Peace \n";
    cin >> peace;

    cout << "Enter Defected Peace \n";
    cin >> defected_peace;

    int totle_peace = peace - defected_peace;
    cout << "Totle Peace of Box =" << totle_peace;
    return 0;



}