#include <iostream>
using namespace std;

int main() {
	int a,b,c;
cout<<"enter the values of sides of the triangle:";
cin>>a>>b>>c;
if (a==b && b==c && c==a)
cout<<"the triangle is equilateral";
else if (a==b || b==c ||c==a)
cout<<"the triangle is isosceles";
else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
cout<<"the triangle is right angled";
else
cout<<"the triangle is scalene triangle";

	return 0;
}
