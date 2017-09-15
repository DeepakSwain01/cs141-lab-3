#include <iostream>
using namespace std;
 
int main() {
	int ang1, ang2, ang3;
	cout<<"three angle of the triangle:";
	cin>>ang1>>ang2>>ang3;
	if (ang1+ang2+ang3 == 180)
	cout<<"triangle is valid";
	else
	cout<<"triangle is not valid";
	return 0;
}
