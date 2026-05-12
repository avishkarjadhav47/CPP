#include<iostream>
using namespace std;
int main()
{
	int a,b,gcd=1;
	cout <<"Enter a & b separated by space: ";
	cin >>a>>b;
	while(b!=0)
	{
		gcd=a%b;
		a=b;
		b=gcd;
	}
	cout<<"GCD: "<<gcd<<endl;
	return 0;
}
