#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int x;
	public:
	    void setdata1(int a)
		{
			x=a;
		}
		friend void show(A,B);	
};
class B
{
	private:
		int y;
	public:
	    void setdata2(int b)
		{
			y=b;
		}
		friend void show(A,B);	
};
void show(A obj1,B obj2)
{
	cout<<"Sum:"<<obj1.x+obj2.y;
}
int main()
{
	A objA;
	B objB;
	objA.setdata1(10);
	objB.setdata2(20);
	show(objA,objB);
	return 0;
}
