#include <iostream>
using namespace std;

int dealer(int liters, int price_per_liter) {
    int total_cost = liters * price_per_liter;
    return total_cost; 
}

int main() {
    int pump_liters = 200;
    int base_price = 90;  
    int user_liters;
    int user_price = base_price + 5; 


    int pump_total = dealer(pump_liters, base_price);
    cout << "Petrol Pump ke liye:" << "\n";
    cout << "Liters: " << pump_liters << ", Price per liter: Rs. " << base_price << "\n";
    cout << "Total Cost: Rs. " << pump_total << "\n";

    cout << "\nKitne liter petrol chahiye";
    cin >> user_liters;

    int user_total = dealer(user_liters, user_price);
    cout << "User ke liye:" << "\n";
    cout << "Liters: " << user_liters << ", Price per liter: Rs. " << user_price << "\n";
    cout << "Total Cost: Rs. " << user_total << "\n";

    return 0;
}