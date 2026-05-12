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
		friend Calculator operator+(Calculator x,Calculator y);
};
Calculator operator+(Calculator x,Calculator y)
		{
			Calculator temp;
			temp.a=x.a+y.a;
			temp.b=x.b+y.b;
			return temp;
		}
int main()
{
	Calculator c1,c2,c3;
	c1.get(4,5);
	c2.get(3,2);
	c3=c1+c2;//operator+(c1,c2)
	c3.show();
	return 0;
}
