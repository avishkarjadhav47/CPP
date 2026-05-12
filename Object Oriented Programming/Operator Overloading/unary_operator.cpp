#include<iostream>
using namespace std;
class Calculator
{
	int a,b;
	public:
		void get(int x )
		{
			a=x;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
		}
		Calculator operator++()//pre
		{
			Calculator temp;
			temp.a=++a;
			return temp;
		}
			Calculator operator++(int)//post
		{
			Calculator temp;
			temp.a=a++;
			return temp;
		}
};
int main()
{
	Calculator c1,c2;
	c1.get(4);//4
	c2=c1++;//c1.operator++()
	cout<<"Post Increment:"<<endl;
	c1.show();//5
	c2.show();//4
	c2=++c1;
	cout<<"Pre Increment:"<<endl;
	c1.show();//6
	c2.show();//6
	return 0;
}
