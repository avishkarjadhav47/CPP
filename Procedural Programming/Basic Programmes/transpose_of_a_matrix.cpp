//transpose of a matrix
#include<iostream>
using namespace std;
int main()
{
	int A[3][3],B[3][3];
	cout<<"Enter elements of matrix A:\n";
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		cin>>A[i][j];
	}
	cout<<"Matrix A is:\n";
	for(int i = 0; i <=2; i++)
    {
        for(int j = 0; j<=2; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		B[i][j]=A[j][i];
	}
	cout<<"Transpose of Matrix A is:\n";
	for(int i = 0; i <=2; i++)
    {
        for(int j = 0; j<=2; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }
    return 0;
}
