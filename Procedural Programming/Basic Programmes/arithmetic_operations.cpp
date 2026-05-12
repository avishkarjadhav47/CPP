//Arithmetic operations
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter a,b separeted by space :";
	cin>>a>>b;
	cout<<"sum="<<a+b<<endl;
	cout<<"subtraction="<<a-b<<endl;
	cout<<"multiplication="<<a*b<<endl;
	cout<<"division="<<a/b<<endl;
	cout<<"remainder="<<a%b<<endl; //not defined for float and double
	return 0;
}
