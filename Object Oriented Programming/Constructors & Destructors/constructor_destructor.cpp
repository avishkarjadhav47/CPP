#include<iostream>
using namespace std;
class Constructor
{
	private:
		int x,y;
	public:
	    Constructor()
		{
			cout<<"I am Default Constructor.."<<endl;
			x=1;
			y=2;
		}
		Constructor(int a,int b)
		{
			cout<<"I am Parametrized Constructor.."<<endl;
			x=a;y=b;
		}
		Constructor(int a)
		{
			cout<<"I am Parametrized Constructor.."<<endl;
			x=a;
			y=0;
		}
		Constructor(Constructor &c)
		{
			cout<<"I am Copy Constructor.."<<endl;
			x=c.x;y=c.y;
		}
		~Constructor()
		{
			cout<<"I am Desctructor..."<<endl;
		}
		void display()
		{
			cout<<"x= "<<x<<endl;
			cout<<"y= "<<y<<endl;
		}	
		
};
int main()
{
	Constructor c1;
    Constructor c2(3,4);
    Constructor c4(7);
    Constructor c5(c2);
	c1.display();
	c2.display();
	cout<<"Entry"<<endl;
	{
		Constructor c3(5,6);
	    c3.display();
    }
    cout<<"Exit"<<endl;
	c4.display();
	c5.display();
	return 0;
}
