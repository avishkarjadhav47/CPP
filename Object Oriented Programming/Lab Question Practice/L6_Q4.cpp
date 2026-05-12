#include<iostream>
using namespace std;
class Test
{
	public:
		Test(int x)//No Default constructor available
		{
		}
		Test()
		{
		   cout<<"Hello"<<endl;
		}
};
int main()
{
	Test arr[3];//3 objects created
}
