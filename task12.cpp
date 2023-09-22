#include<iostream>
using namespace std;
main()
{
int sm,w,h;
cout<< "Number of square meters you can paint: ";
cin >>sm;
cout<< "Width of the single wall (in meters): ";
cin >>w;
cout <<"Height of the single wall (in meters): ";
cin >> h;
cout << "Number of walls you can paint: " <<100/(w*h) ;
}