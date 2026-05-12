//sum & average of array elements
#include<iostream>
using namespace std;
int main()
{
	int a[5];float sum=0.0,avg=0.0;
	cout<<"Enter 5 array elements:\n";
	for(int i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	cout<<"Entered 5 array elements are:\n";
	for(int i=0;i<=4;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum<<endl;
	int n = sizeof(a)/sizeof(a[0]);
	avg=sum/n;
	cout<<avg<<endl;
return 0;	
}
