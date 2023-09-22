#include<iostream>
using namespace std;
main()
{
int min,frames;
cout <<"Number of Minutes: ";
cin >> min;
cout <<"Frames per Second: ";
cin >> frames;
cout << "Total Number of Frames: " <<min*frames*60;
}
