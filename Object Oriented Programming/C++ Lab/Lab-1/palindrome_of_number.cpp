//palindrome of a number
#include <iostream>
using namespace std;
int main()
{
	int n,rev=0,k,temp;
	cout<<"enter positive integer:";
	cin>>n;
	temp=n;
	while(n!=0)
	{
	   k=n%10;
	   rev=rev*10+k;
	   n=n/10;	
	}
	cout<<"reverse="<<rev<<endl;
	if(temp==rev)
	cout<<"palindrome";
	else
	cout<<"not a palindrome";
	return 0;
}
