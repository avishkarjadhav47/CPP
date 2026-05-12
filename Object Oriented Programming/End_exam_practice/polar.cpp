#include<iostream>
#include<math.h>
using namespace std;

class Polar
{
	float r, a;

	public:
		Polar(float r=0, float a=0)
		{
			this->r = r;
			this->a = a;
		}

		// Operator overloading
		Polar operator+(Polar p)
		{
			float x1 = r * cos(a);
			float y1 = r * sin(a);

			float x2 = p.r * cos(p.a);
			float y2 = p.r * sin(p.a);

			float x = x1 + x2;
			float y = y1 + y2;

			Polar temp;
			temp.r = sqrt(x*x + y*y);
			temp.a = atan(y/x);

			return temp;
		}

		void display()
		{
			cout<<"r = "<<r<<"  angle = "<<a<<endl;
		}
};

int main()
{
	Polar p1(5, 0.5), p2(4, 0.3), p3;

	p3 = p1 + p2;

	p3.display();

	return 0;
}
