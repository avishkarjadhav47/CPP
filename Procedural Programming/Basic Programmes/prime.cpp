#include <iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	cout<<"Enter integer :";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		c=c+1;
	}			
	if (c==2)
	cout<<"Prime";
	else
	cout<<"Not Prime";
	return 0;
}
