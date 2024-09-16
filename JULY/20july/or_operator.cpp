#include <iostream>
using namespace std;
int main()
{
    int number_one = 10;
    int number_two = 5;
    int number_three = 15;
    bool or_operator = number_one < number_two || number_one > number_three;
    cout << "Result" << or_operator << "\n";
    bool  not_operator = ! number_one < number_two;
    cout <<"Result =" << not_operator;
    return 0;
}