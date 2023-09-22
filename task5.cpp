#include<iostream>
using namespace std;
main()
{
	string person;
	float weight;
	cout <<"Enter the Name of the Person: ";
	cin >> person;
	cout <<"Enter the target weight loss in kilograms: ";
	cin >> weight;
	cout << person << " will need " << weight*15 << " days to lose " << weight << " kg of weight by following the doctor's suggestions";

}