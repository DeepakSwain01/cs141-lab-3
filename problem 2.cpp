#include <iostream>
using namespace std;

int main() 
{
	int a,b,c;
cout<<"enter three number:";
cin>>a>>b>>c;
if (a>b && a>c)
{
cout<<"a is the larger number";
}
else if (b>a && b>c)
{
cout<<"b is the larger number";
}
else
{
cout<<"c is the larger number";
}
	return 0;
}
