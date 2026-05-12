#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"Enter Number:";
	cin>>n;
	for(int i;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
	return 0;
}
