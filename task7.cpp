#include<iostream>
using namespace std;
main()
{
	string movie;
	float adultprice,chiprice,apriceno,chipriceno,charity,total,charitycharges;
	cout <<"Enter the movie name: ";
	cin >> movie;
	cout <<"Enter the adult ticket price: $";
	cin >> adultprice;
	cout <<"Enter the child ticket price: $";
	cin >> chiprice;
	cout <<"Enter the number of adult tickets sold: ";
	cin >> apriceno;
	cout <<"Enter the number of child tickets sold: ";
	cin >> chipriceno;
	cout <<"Enter the percentage of the amount to be donated to charity: ";
	cin >>charity;
	total=(adultprice*apriceno)+(chipriceno*chiprice);
	charitycharges=total*10/100;
	cout <<"\n";
	cout <<"\n";
	cout <<"Movie: " <<movie;
	cout <<"\nTotal amount generated from ticket sales: $" << total;
	cout <<"\nDonation to charity (" << charity <<"%): $" << charitycharges;
	cout << "\nRemaining amount after donation: $" << total-charitycharges;

	

}