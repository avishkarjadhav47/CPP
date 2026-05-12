#include<iostream>
using namespace std;

class Y;

class X
{
	public:
		void show1(Y);
		void show2()
		{
			cout<<"I am function 2 of class X"<<endl;
		}
};

class Y
{
	int a;
	public:
		Y()
		{
			a=10;
		}
		friend void X::show1(Y);
};

void X::show1(Y y1)
{
	cout<<"Value of a from class Y = "<<y1.a<<endl;
}

int main()
{
	X x1;
	Y y1;

	x1.show1(y1);

	return 0;
}
