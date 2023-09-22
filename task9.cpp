#include<iostream>
using namespace std;
main()
{
int number,rone,qone,rtwo,qtwo,rthree,qthree,rfour,qfour;
cout <<"Enter a 4-digit number: ";
cin >> number;
rone=number%10;
qone=number/10;
rtwo=qone%10;
qtwo=qone/10;
rthree=qtwo%10;
qthree=qtwo/10;
rfour=qthree%10;
qfour=qthree/10;





cout << "Sum of the individual digits: " << rone+rtwo+rthree+rfour ;
}

