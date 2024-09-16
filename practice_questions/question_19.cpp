/*
Write a program that calculates the energy needed to heat water from an initial temperature to a final temperature. 
Your program should prompt the user to enter the amount of water in kilograms and the initial and final temperatures of the water.

The formula to compute the energy is Q = M * (finalTemperature – initialTemperature) * 4184

where M is the weight of water in kilograms temperatures are in degrees Celsius, and energy Q is measured in joules.

Here is a sample run:
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the ammount of water in kilograms" << "\n";
    double water_ammount = 0;
    cin >> water_ammount;

    cout << "Enter the initial temperature of water" << "\n";
    double initial_temperature = 0;
    cin >> initial_temperature;

    cout << "Enter the final temperature of water" << "\n";
    double finel_teemperature = 0;
    cin >> finel_teemperature;

    double compute_the_energy_is_q = water_ammount * (finel_teemperature - initial_temperature) * 4184;
    cout << "The energy needed is = " << compute_the_energy_is_q << "\n";

     return 0;
 
}
