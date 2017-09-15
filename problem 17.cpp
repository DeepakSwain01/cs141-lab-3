#include <iostream>
#include <math.h>
using namespace std;

int main() {
float a,b,c,x1,x2;
cout<<"enter the coefficient of x^2 ,coefficient of x & constant term respectively:";
cin>>a>>b>>c;
x1=( - b + ( pow(b,2) - 4*a*c)) / (2*a);
x2=(- b - ( pow(b,2) - 4*a*c)) / (2*a);
cout<<"the roots of the quadratic equation is"<< x1 << "&" <<  x2;
	
	return 0;
}
