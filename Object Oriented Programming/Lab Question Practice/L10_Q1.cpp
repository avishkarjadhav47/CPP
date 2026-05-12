#include<iostream>
using namespace std;
class Base
{
	protected:
		int x;
	public:
	    void setvalue(int a)
		{
			x=a;
		}	
};
class Derived:public Base
{
	public:
		void display()
		{
			cout<<"Value of x="<<x;
		}
};
int main()
{
	Derived AA;
	AA.setvalue(10);
	AA.display();
	return 0;
}
