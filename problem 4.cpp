#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int a;
cout<<"enter a number:";
cin>>a;
if ( a%5 == 0 && a%11 == 0)
{
cout<<"a is divisible by 11 and 5";
}
else
{
cout<<"a is not divisible by 11 and 5";
}
	return 0;
}
