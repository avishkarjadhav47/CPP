//sum of even & odd elements in array
#include<iostream>
using namespace std;
int main()
{
	int a[5],even_sum=0,odd_sum=0;
	cout<<"Enter 5 array elements:\n";
	for(int i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=4;i++)
	{
		if (a[i]%2==0)
		even_sum=even_sum+a[i];
		else
		odd_sum=odd_sum+a[i];
	}
	cout<<even_sum<<endl;
	cout<<odd_sum<<endl;
return 0;	
}
