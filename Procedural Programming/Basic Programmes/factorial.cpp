//factorial of a number
#include <iostream>
using namespace std;
int main()
/*
//for loop
{
	int n,fact=1;
	cout<<"enter integer:";
	cin>>n;
	for (int i=1;i<=n;i++)
	{ fact=fact*i;}
	cout<<fact;
	return 0;
}
*/
/*
//while loop
{
	int n,fact=1,i=1;
	cout<<"enter integer:";
	cin>>n;
	while(i<=n)
		{ fact=fact*i;i++;}
	cout<<fact;
	return 0;
}
*/

{
	int n,fact=1,i=1;
	cout<<"enter integer:";
	cin>>n;
	do
	{ fact=fact*i;i++;}
	while(i<=n);
	cout<<fact;
	return 0;
}
	
	
	
	

