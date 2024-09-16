/*
Average acceleration is defined as the change of velocity divided by the time taken to make the change, 
as shown in the following formula:

a = (v1 - v0) / t
Write a program that prompts the user to enter the starting velocity v0 in meters/second, 
the ending velocity v1 in meters/second, and the time span t in seconds, and displays the average 
acceleration.

Sample Run
Input
Enter v0 : 5.5
Enter v1 : 50.9
Enter t  : 4.5

Output
The average acceleration is 10.0889
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "enter the starting velocity v0" << "\n";
    float v0 = 0;
    cin >> v0;

    cout << "enter the ending velocity v1" << "\n";
    float v1 = 0;
    cin  >> v1;

    cout << "enter the time span t" << "\n";
    float t = 0;
    cin >> t;

    float average_acceleration = (v1 - v0) / t;
    cout << "The average acceleration is " << average_acceleration << "\n";

    return 0;
}