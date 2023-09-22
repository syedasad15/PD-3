#include<iostream>
using namespace std;
main()
{
float velocity,acceleration,time;
cout << "Enter Initial Velocity (m/s): ";
cin >> velocity;
cout << "Enter Acceleration (m/s^2): ";
cin >> acceleration;
cout << "Enter Time (s): ";
cin >> time;
cout <<"Final Velocity (m/s): " <<(acceleration*time)+velocity;
} 