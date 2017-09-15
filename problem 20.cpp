#include <iostream>
using namespace std;

int main () {
int bs, gs, HRA, DA;
cout<<"enter the basic salery";
cin>>bs;
if (bs<10000 | bs == 10000)
{HRA=.2*bs;
gs=bs+HRA+DA;
cout<<"gross salery is"<<gs;
}
else if (bs<20000 |  bs==20000)
{HRA=.25*bs;
DA=.9*bs;
gs=bs+HRA+DA;
cout<<"gross salery is"<<gs;
}
else
{HRA=.3*bs;
DA=.95*bs;
gs=bs+HRA+DA;
cout<<"gross salery is"<<gs;
}


	return 0;
}
