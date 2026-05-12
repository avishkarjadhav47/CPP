//Insert element at given position (At 5th insert 47) in array
#include<iostream>
using namespace std;
int main()
{
	int A[10]={1,2,3};
	A[4]=47;
	cout<<"Array is:";
	for(int i=0;i<=10;i++)
	cout<<A[i]<<" ";
	return 0;
}
