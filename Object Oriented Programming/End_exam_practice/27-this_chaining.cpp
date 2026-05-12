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
	hello& setx(int x)
	{
		this->x=x;
		return *this;
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
	h.setx(56).setx(67).setx(90);
	h.display();
}
