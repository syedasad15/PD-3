#include<iostream>
using namespace std;
main()
{
	float vprice,fprice,fkg,vkg;
	cout <<"Enter vegetable price per kilogram (in coins): ";
	cin >> vprice;
	vprice=vprice/1.94;
	cout <<"Enter fruit price per kilogram (in coins): ";
	cin >> fprice;
	fprice=fprice/1.94;
	cout <<"Enter total kilograms of vegetables: ";
	cin >>vkg;
	cout <<"Enter total kilograms of fruits: ";
	cin >>fkg;
	cout <<"Total earnings in rupees (Rps):" <<(vprice*vkg)+(fprice*fkg);
	

	

}