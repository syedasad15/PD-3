#include<iostream>
using namespace std;
main()
{
float pounds,cost,area;
cout <<"Enter the size of the fertilizer bag in pounds: ";
cin >> pounds;
cout <<"Enter the cost of the bag: $";
cin >> cost;
cout << "Enter the area in square feet that can be covered by the bag: ";
cin >> area;
cout << "Cost of fertilizer per pound: $" << cost/pounds;
cout << "\nCost of fertilizing per square foot: $" <<cost/area; 
}