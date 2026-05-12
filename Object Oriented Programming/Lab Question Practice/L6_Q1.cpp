//If r is in % -> divide by 100
// If r is in decimal -> DON’T divide by 100
#include<iostream>
using namespace std;
class bank
{
	float d, r, t;

	public:
		bank()
		{
			d = 100.0;
			r = 5;
			t = 1.5;
		}
	void deposit()
	{
		cout<<"Interest="<<(d*r*t)/100<<endl;
	}
	void deposit(float d)
	{
		cout<<"Interest="<<(d*r*t)/100<<endl;
	}
};
int main()
{
	bank b;
	b.deposit();
	b.deposit(200);
	return 0;
}
