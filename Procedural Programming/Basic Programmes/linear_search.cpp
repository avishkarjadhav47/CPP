//linear search
#include <iostream>
using namespace std;
int main()
{
	int n,key,flag=0;
	cout<<"enter array size:";
	cin>>n;
	int a[n];
	cout<<"enter array elements:";
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"entered array is:";
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nenter key:";
	cin>>key;
	for(int i=0;i<n;i++)
	{ if (a[i]==key)
	   {
	   	cout<<i;
	   	flag=1;
	   	break;
	   }
	}
	if(flag == 0)
        cout << "Element not found";
	return 0;
}
