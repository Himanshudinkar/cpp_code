#include <iostream>
using namespace std;
int main()
{
    int number1 = 0;
    int number2 = 0;

    cout << "Enter Number1\n";
    cin >> number1;

    cout << "Enter Number2\n";
    cin >> number2;

    bool less_than = number1 < number2;
    cout << "Result =" << less_than <<"\n";

    bool greater_than = number1 > number2;
    cout << "Result =" << greater_than <<"\n";

    bool equal_to = number1 == number2;
    cout << "Result =" << equal_to <<"\n";

    bool less_than_equal_to = number1 <= number2;
    cout << "Result =" << less_than_equal_to <<"\n";

    bool greater_than_equal_to = number1 >= number2;
    cout << "Result =" << greater_than_equal_to <<"\n";

    bool not_equal_to = number1 != number2;
    cout << "Result =" << not_equal_to;

    return 0;
}