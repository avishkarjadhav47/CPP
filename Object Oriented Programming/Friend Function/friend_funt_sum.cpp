#include<iostream>
using namespace std;
class Calculator
{
	int a,b;
	public:
		void set(int x,int y)
		{
			a=x;
			b=y;
		}
		friend int add(Calculator c);
};
int add(Calculator c)
{
	cout<<"Sum="<<c.a+c.b;
}
int main()
{
	Calculator c1,c2;
	c1.set(3,4);
	add(c1);
	return 0;
}
