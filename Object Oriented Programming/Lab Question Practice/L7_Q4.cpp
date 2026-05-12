#include<iostream>
using namespace std;
class Rectangle
{
	private:
		double length,breadth;
	public:
	    Rectangle()
		{
			length=21.53;
			breadth=12.35;
		}
		void display()
		{
			cout<<"Area:"<<length*breadth<<endl;
			cout<<"Perimeter:"<<2*(length+breadth)<<endl;
		}	
};
int main()
{
	Rectangle r1;
	r1.display();
	return 0;
}

