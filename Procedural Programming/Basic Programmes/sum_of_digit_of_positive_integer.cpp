//sum of digits of positive integer
#include <iostream>
using namespace std;
int main()
{
	int n,sum,k;
	cout<<"enter positive integer:";
	cin>>n;
	if (n<=0)
	{
		cout<<"Invalid choice."<<endl;
		return 0;
	}
	else
	{
		while(n!=0)
	{
	   k=n%10;
	   sum=sum+k;
	   n=n/10;	
	}
	cout<<sum;
    }
	return 0;
}
