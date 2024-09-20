#include<iostream>
using namespace std;
main()
{
 int sides;
 int sum ;
 cout << "Enter the number of sides of polygon: ";
 cin >> sides;
 sum = ((sides-2)*180);
 cout << "The sum of internal angles of a " << sides << "-sided polygon is: " << sum << "degrees" << endl;
}