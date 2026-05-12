//square each digit of a number
#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"enter positive integer:";
	cin>>n;
	while(n!=0)
	{
	   k=n%10;
	   cout<<k<<"^2="<<k*k<<endl;
	   n=n/10;	
	}
	return 0;
}
