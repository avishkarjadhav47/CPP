#include <iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2;
	cout<<"Enter rows & columns of matrix 1:";
	cin>>r1>>c1;
	cout<<"Enter rows & columns of matrix 2:";
	cin>>r2>>c2;
	if(c1!=r2)
	{
		cout<<"Matrix multiplication not possible.";
		return 0;
	}
	int A[10][10],B[10][10],C[10][10]={0};
	cout<<"Enter Elements of matrix 1:";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>*(*(A+i)+j);
		}
	}
	cout<<"Enter Elements of matrix 2:";
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cin>>*(*(B+i)+j);
		}
	}
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			for(int k=0;k<c1;k++)
			{
				*(*(C+i)+j)+=(*(*(A+i)+k))*(*(*(B+k)+j));
			}
		}
	}
	cout<<"Resultant Matrix is\n:";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<*(*(C+i)+j)<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
