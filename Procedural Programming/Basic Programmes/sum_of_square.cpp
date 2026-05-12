//sum of squares from 1 to n
#include<iostream>
using namespace std;
int main()
/*
//for loop
{
	int n,sum=0;
	cout<<"enter integer:";
	cin>>n;
	for(int i=1;i<=n;i++)
	     sum=sum+i*i;
	cout<<sum;
	return 0;
}
*/
/*
//while loop
{
	int n,i=1,sum=0;
	cout<<"enter integer:";
	cin>>n;
	while(i<=n)
	    {                 //give curley braces ,be risk free
		 sum=sum+i*i;
	     i++;
	    }
	cout<<sum;     
	return 0;
}
*/
{
	int n,i=1,sum=0;
	cout<<"enter integer:";
	cin>>n;
	do
	{                 
		 sum=sum+i*i;
	     i=i+1;
	}
	while (i<=n);
	cout<<sum;
	return 0;
}
	
	
