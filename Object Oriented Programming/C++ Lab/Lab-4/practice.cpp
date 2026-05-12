#include <iostream>
using namespace std;

struct XYZ
{
	int x;
	double y;
	char z;
};

struct ZYX
{
	int x[10];
	float y;
	double z[5];
};

int main()
{
	int A[]={12,5,200};
	float B[]={12.2,5,200.0};
	double C[]={12.2,5,200.0};
	
	int M[3][3];
	
	XYZ s1;
	ZYX s2;
	
	cout<<"Size of int array A:"<<sizeof(A)<<"bytes"<<endl;
	cout<<"Size of float array B:"<<sizeof(B)<<"bytes"<<endl;
	cout<<"Size of double array C:"<<sizeof(C)<<"bytes"<<endl;
	cout<<"Size of int matrix M:"<<sizeof(M)<<"bytes"<<endl;
	cout<<"Size of structure XYZ:"<<sizeof(s1)<<"bytes"<<endl;
	cout<<"Size of int Structure ZYX:"<<sizeof(s2)<<"bytes"<<endl;
	return 0;
}
