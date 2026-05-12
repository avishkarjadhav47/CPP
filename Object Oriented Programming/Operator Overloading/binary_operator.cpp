#include<iostream>
using namespace std;
class Calculator
{   int a,b;
	public:
		void get(int x,int y)
		{
			a=x;b=y;
		}
		int show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
		Calculator operator+(Calculator c)
		{
			Calculator temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};
int main()
{
	Calculator c1,c2,c3;
	c1.get(4,5);
	c2.get(3,2);
	c3=c1+c2;//c1.operator+(c2)
	c3.show();
	return 0;
}
