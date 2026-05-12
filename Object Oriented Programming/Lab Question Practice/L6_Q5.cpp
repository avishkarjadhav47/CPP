#include<iostream>
using namespace std;
class Test
{
	int *p;
	public:
		Test(int x)
		{
			p=new int(x);
		}
		Test(const Test &t)
		{
			p=new int (*t.p);
			cout<<"Constant Value="<<*p<<endl;
		}
		~Test()
		{
			delete p;
		}
};
int main()
{
	Test t1(5);
	Test t2=t1;
	return 0;
}
