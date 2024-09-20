#include<iostream>
using namespace std;
main()
{
 string name;
 float adult_t_price;
 float child_t_price;
 float adult_t_sold;
 float child_t_sold;
 float percent;
 float total, donation, remaining;
 cout << "Enter the name of the movie: ";
 cin >> name;
 cout << "Enter the adult ticket price: $";
 cin >> adult_t_price;
 cout << "Enter the child ticket price: $";
 cin >> child_t_price;
 cout << "Enter the number of adult tickets sold: ";
 cin>> adult_t_sold;
 cout <<"Enter the number of child tickets sold: ";
 cin >> child_t_sold;
 cout <<"Enter the percentage of the amount to be donated by charity: ";
 cin >> percent ;
 cout << ""<< endl;
 total = (adult_t_sold*adult_t_price) + (child_t_sold*child_t_price);
 donation = ((total*percent)/100);
 remaining = (total-donation);
 cout << "Movie: " << name << endl;
 cout << "Total amount generated from ticket sales: $" << total<< endl;
 cout << "Donation to charity (" << percent<< "): $" << donation << endl;
 cout << "Remaining amount after donation: $" << remaining << endl;
}