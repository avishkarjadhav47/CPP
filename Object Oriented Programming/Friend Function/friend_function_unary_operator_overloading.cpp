#include<iostream>
using namespace std;
class Calculator
{
	int a;
	public:
		void get(int x )
		{
			a=x;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
		}
		friend Calculator operator++(Calculator c);//pre
		friend Calculator operator++(Calculator c,int);//post
		
};
Calculator operator++(Calculator c)//pre
		{
			Calculator temp;
			temp.a=++c.a;
			return temp;
		}
Calculator operator++(Calculator c,int)//post
		{
			Calculator temp;
			temp.a=c.a++;
			return temp;
		}
int main()
{
	Calculator c1,c2;
	c1.get(4);//4
	c2=c1++;
	cout<<"Post Increment:"<<endl;
	c1.show();//5
	c2.show();//4
	c2=++c1;
	cout<<"Pre Increment:"<<endl;
	c1.show();//6
	c2.show();//6
	return 0;
}
