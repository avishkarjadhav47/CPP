//simple interest
#include <iostream>
using namespace std;
int main()
{
	float p,t,r;
	cout<<"enter principal amount(p),time(t in years),rate of interest(r) seperated by space:";
	cin>>p>>t>>r;
	cout<<"simple interest ="<<(p*t*r)/100;
	return 0;
}
