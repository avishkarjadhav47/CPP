//addition & subtraction of matrix
#include<iostream>
using namespace std;
int main()
{
	int A[2][2],B[2][2],C[2][2],D[2][2];
	cout<<"Enter elements of matrix A:\n";
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		cin>>A[i][j];
	}
	cout<<"Enter elements of matrix B:\n";
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		cin>>B[i][j];
	}
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
		C[i][j]=A[i][j]+B[i][j];
		D[i][j] = A[i][j]-B[i][j];
	    }
	}
	cout<<"Resultant matrix C is:";
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		cout<<C[i][j]<<endl;
	}	
	 cout << "Subtraction of matrices:\n";
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j<=1; j++)
            cout << D[i][j] << " ";
        cout << endl;
    }
return 0;	
}
