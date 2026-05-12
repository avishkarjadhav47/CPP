//gcd(=hcf) ,lcm  two numbers [lcf(8,12)=2 & lcm(8,12)=24] #a*b=gcd*lcm #lcm!=lcf
#include<iostream>
using namespace std;
int main()
{
	int a,b,divisor,dividend,remainder,gcd;
	cout<<"enter a & b separated by space:";
	cin>>a>>b;
	if (a>b)
	{dividend=a;divisor=b;}
	else
	{dividend=b;divisor=a;}
	while (divisor!=0)
	{
	remainder=dividend%divisor;
	 dividend=divisor;
	 divisor=remainder;
	}
	gcd=dividend;
	cout<<"GCD="<<dividend<<endl;
	cout<<"LCM="<<(a*b)/gcd<<endl;
	return 0;
}
