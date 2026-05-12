#include<iostream>
using namespace std;
class Test
{
	public:
		Test()//  Only declaration, no definition;
		{
			cout << "Constructor called" << endl;
		}
};
int main()
{
	Test t1;
	return 0;
}
