//Inline-operation class-OOP's Programming
#include<iostream>
using namespace std;
class operation
{
	int a,b;
	public:
		inline void get()
		{
	       cout<<"Enter 1st value:";
	       cin>>a;
	       cout<<"Enter 2nd value:";
	       cin>>b;
        }

        inline void sum()
        {
	       cout<<"Addition="<<a+b<<endl;
        }
        
        inline void product()
        {
	       cout<<"Product="<<a*b<<endl;
        }
		
};

int main()
{
	operation s;
	s.get();
	s.sum();
	s.product();
	return 0;
}
