//print diagonal & antidiagonal elemt of matrix: diagonal->i==j ,antidiagonal->i+j=n-1
#include<iostream>
using namespace std;
int main()
{
	int A[3][3];
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
	cout<<"Diagonal Element of matrix A is:\n";
	for(int i = 0; i <=2; i++)
    {
        for(int j = 0; j<=2; j++)
        {
		
        if(i==j)
            cout << A[i][j] << " ";
       }
    }
    return 0;
}
