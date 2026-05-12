#include<iostream>
using namespace std;
class hello
{
	int x;
	public:
	hello(int x)
	{
		this->x=x;
	}
	void display()
	{
		cout<<x<<endl;
	}
};
int main()
{
	hello h(6);
	h.display();
}
