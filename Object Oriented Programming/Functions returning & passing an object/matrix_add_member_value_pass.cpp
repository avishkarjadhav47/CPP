//Object as argument of a function-->Matrix Addition
#include<iostream>
using namespace std;

class matrix
{
	int a[5][5],n,i,j;
	
	public:
		matrix(int size)
		       {
		       	n=size;
			   }
		void readmatrix()
		    {
		       	for (i=0;i<n;i++)
		       	{
		       		for(j=0;j<n;j++)
		       		{
		       			cin>>a[i][j];
					}
				}
			
			}
		void writematrix()
		  	{
		       	for (i=0;i<n;i++)
		       	{
		       		for(j=0;j<n;j++)
		       		{
		       			cout<<a[i][j]<<" ";
					}
					cout<<endl;
				}
			
			}
		void add(matrix m1,matrix m2)
		    {
		       	for (i=0;i<n;i++)
		       	{
		       		for(j=0;j<n;j++)
		       		{
		       			a[i][j]=m1.a[i][j]+m2.a[i][j];
					}
				}
			
			}		   
};

int main ()
{
	matrix N1(3),N2(3),N3(3);
	cout<<"Enter 1st matrix :"<<endl;
	N1.readmatrix();
	cout<<"Enter 2nd matrix :"<<endl;
	N2.readmatrix();
	N3.add(N1,N2);
	cout<<"Matrix Addition:"<<endl;
	N3.writematrix();
	return 0;
}
