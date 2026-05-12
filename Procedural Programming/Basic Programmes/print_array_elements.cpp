//print array elements
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
	cout<<"Entered 5 array elements are:\n";
	for(int i=0;i<=4;i++)
	{
		cout<<a[i]<<endl;
	}
return 0;	
}
