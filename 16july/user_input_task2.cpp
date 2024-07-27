#include <iostream>
using namespace std;
int main()
{
    int quantity;
    float price;
    double discount_price;
    bool defected;

    cout << "Enter Quantity" <<"\n";
    cin >> quantity;

    cout << "Enter Price" <<"\n";
    cin >> price;

    cout << "Enter Discount Price" <<"\n";
    cin >> discount_price;

    cout << "Defected" <<"\n";
    cin >> defected;

    cout <<"Quantity =" << quantity <<"\n";
    cout <<"Price =" << price <<"\n";
    cout <<"Discount Price =" << discount_price <<"\n";
    cout <<"Defected =" << defected <<"\n";
    return 0;
    }