#include<iostream>
using namespace std;
class Y;
class X
{
	private:
		int a;
	public:
	    void get(int x)	
	    {
	    	a=x;
		}
		friend int add(X x,Y y);
};
class Y
{
	private:
		int b;
	public:
	    void get(int y)	
	    {
	    	b=y;
		}
		friend int add(X x,Y y);
};
int add(X x,Y y)
{
	cout<<"Sum="<<x.a+y.b;
}
int main()
{
	X x1;
	x1.get(3);
	Y y1;
	y1.get(4);
	add(x1,y1);
	return 0;
}

