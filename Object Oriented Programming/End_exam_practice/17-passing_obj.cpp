#include<iostream>
using namespace std;
class matrix
{int a[5][5];int n;
     public:
     	matrix(int z)
     	{
     		n=z;
		}
     	void get()
     	{
     		cout<<"Enter matrix Elements:"<<endl;
     		for(int i=0;i<n;i++)
     		{
     			for(int j=0;j<n;j++)
     			{
     				cin>>a[i][j];
				}
			}
		}
		void read()
     	{
     		cout<<"Entered matrix Elements are:"<<endl;
     		for(int i=0;i<n;i++)
     		{
     			for(int j=0;j<n;j++)
     			{
     				cout<<a[i][j]<<" ";
				}
			}
		}
		void sum(matrix m1,matrix m2)
		{
     		for(int i=0;i<n;i++)
     		{
     			for(int j=0;j<n;j++)
     			{
     				a[i][j]=m1.a[i][j]+m2.a[i][j];
				}
			}
		}
};
int main()
{
	matrix k(3),l(3),m(3);
	k.get();
	l.get();
	m.sum(k,l);
	m.read();
	return 0;
}
