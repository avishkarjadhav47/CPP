//prime between 1 and n
#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"enter n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{   
	    count=0; //reset is must otherwise all divisors adding
		for (int j=1;j<=i;j++)
		{
		  if (i%j==0)
		    count++;
	    }
	    if(count==2)
	    cout<<i<<endl;
	}
	return 0;
}
