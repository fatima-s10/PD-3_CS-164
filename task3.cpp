#include<iostream>
using namespace std;
main()
{
 int initial_velocity;
 int final_velocity;
 int acceleration, time;
 cout <<"Enter initial velocity (m/s): ";
 cin >> initial_velocity;
 cout << "Enter Acceleration (m/s^2): ";
 cin >> acceleration;
 cout << "Enter time (s): ";
 cin >> time;
 final_velocity = ((time*acceleration) + initial_velocity);
 cout <<"Final velocity (m/s): " << final_velocity << endl;
}