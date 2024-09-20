#include<iostream>
using namespace std;
main()
{
 float squaremeters;
 float width;
 float height;
 int walls;
 cout << "Number of square meters you can paint: ";
 cin >> squaremeters;
 cout << "Width of the single wall (in meters): ";
 cin>> width;
 cout << "Height of the single wall (in meters): ";
 cin >> height;
 walls = (squaremeters/(width*height));
 cout << "Numbers of walls you can paint: " << walls << endl;
}