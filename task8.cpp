#include<iostream>
using namespace std;
main()
{
 float vegetableprice;
 float fruitprice;
 int v_amount;
 int f_amount;
 float total;
 cout <<"Enter vegetable price per kilogram (in coins): ";
 cin >> vegetableprice;
 cout << "Enter fruit price per kilogram (in coins): ";
 cin>> fruitprice;
 cout << "Enter total kilograms of vegetables: ";
 cin >> v_amount;
 cout << "Enter total kilograms of fruits: ";
 cin >> f_amount;
 total = (((vegetableprice*v_amount) + (fruitprice*f_amount))/1.94);
 cout << "Total eranings in Rupees (Rps): " << total <<endl;
}