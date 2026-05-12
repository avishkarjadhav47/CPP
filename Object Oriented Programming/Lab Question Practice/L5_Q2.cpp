#include<iostream>
using namespace std;
class fun
{
	public:
		void func1()
		{
			cout<<"I am function 1"<<endl;
			func2();
		}
	private :	
		void func2()
		{
			cout<<"I am function 2"<<endl;
			func3();
		}
		void func3()
		{
			cout<<"I am function 3"<<endl;
			func4();
		}
		void func4()
		{
			cout<<"I am function 4"<<endl;
		}
};
int main()
{
	fun f;
	f.func1();
	return 0;
}
