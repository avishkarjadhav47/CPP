#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	int *p=&a,*q=&b;
	cout<<"Enter a and b:"<<endl;
	cin>>a>>b;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"a and b are:"<<endl;
	cout<<a<<" "<<b<<endl;
	return 0;
}
