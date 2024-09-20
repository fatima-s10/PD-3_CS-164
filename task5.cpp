#include<iostream>
using namespace std;
main()
{
 string name;
 float weightloss;
 float days;
 cout << "Enter the name of the person: " ;
 cin >> name;
 cout << "Enter the target weight loss in kilograms: " ;
 cin >> weightloss;
 days = (weightloss*15);
 cout << name << " will need " << days << " days to lose " << weightloss << " kg of weight by following the doctor's suggestion." << endl;
}