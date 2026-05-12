/*
#include<iostream>
using namespace std;
int main()
{   
    int n=145778647,count=0;
	while(n!=0)
	{
	count=count+1;
	n=n/10;
    }
    cout<<count;
	return 0;
} */

#include<iostream>
using namespace std;
int main()
{   
    int n=12345,sum=0;
    do
    {
    	sum=sum+n%10;
    	n=n/10;
	}
	while(n>0);
	cout<<sum;
	return 0;
}
	
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
