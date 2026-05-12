//min element in array
//max element in array
#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"Enter 5 array elements:\n";
	for(int i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	int min=a[0];
	for(int i=0;i<=4;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	cout<<min;
return 0;	
}
