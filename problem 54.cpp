#include <iostream>
using namespace std;

int main() {
int n,a,i,j,s;
cout << "Enter a positive  integer : ";
cin >> n;
for( i=1 ; i<n ; i++)
   {
    s = 0;
    for( j=1 ; j<i ; j++)
       {
        if(i%j==0)
        s += j;
       }
    if(s==i)
       cout << i << "\n";
   }
return 0;
}
