#include<iostream>
#include<string>
using namespace std;
class greet
{string n;int i;
	public:
		greet()//default constructor
		{
			cout<<"Good morning..."<<endl;
		}
		greet(string m)//parametrized constructor
		{
			n=m;
			cout<<n<<endl;
		}
		greet(string m,int k)
		{
			n=m;i=k;
			cout<<n<<i<<endl;
		}
		~greet()//destructor
		{
			cout<<"Done"<<endl;
		}
};
int main()
{
	greet g1;
	greet g3(" Hello",567);
	greet g2("Good Night...");
	return 0;
}
