#include<iostream>
using namespace std;
main()
{
 float imposter;
 float player;
 float chance;
 cout << "Enter imposter count: ";
 cin>> imposter;
 cout << "enter players count: ";
 cin >> player;
 chance = 100*(imposter/player);
 cout << "Chance of being an imposter: " << chance << "%" << endl;
}