#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
	cout<<"Enter a and b:";
	cin>>a>>b;
	for (i=a;i<b;i++)
	{   
	    int count=0;
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
			count=count+1;
		}
	    if (count==2)
	    cout<<i<<endl;
	}
	return 0;
}

