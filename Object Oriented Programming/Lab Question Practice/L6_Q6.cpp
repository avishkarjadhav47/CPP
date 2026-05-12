#include<iostream>
using namespace std;
class Test
{
	int *p;
	public:
	Test(int x)
	{
		p=new int(x);
		cout<<"Shallow Copy Constructor Called"<<endl;
	}
	Test(const Test &t)
	{
		p=new int(*t.p);
		cout<<"Deep Copy Constructor Called"<<endl;
	}
	~Test()
	{
		delete p;
		cout<<"Destructor Called"<<endl;
	}
};
int main()
{
	Test t1(4);
	return 0;
}
