#include<iostream>
using namespace std;
main()
{
 int minutes, frames_sec;
 int total;
 cout << "Number of minutes: " ;
 cin >> minutes;
 cout << "Frames per second: " ;
 cin >> frames_sec;
 total = ((frames_sec*60)*minutes);
 cout << "Total number of frames: " << total << endl; 
}