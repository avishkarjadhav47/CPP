#include<iostream>
#include<cmath>
using namespace std;

struct point
{
	double x,y;
};

int main()
{
	point p1,p2,p3;
	double x,y,area,a,b,c,s;
	cout<<"Enter Coordinates of 1st point:";
	cin>>p1.x>>p1.y;
	cout<<"Enter Coordinates of 2nd point:";
	cin>>p2.x>>p2.y;
	cout<<"Enter Coordinates of 3rd point:";
	cin>>p3.x>>p3.y;
	a=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
	b=sqrt((p3.x-p2.x)*(p3.x-p2.x)+(p3.y-p2.y)*(p3.y-p2.y));
	c=sqrt((p3.x-p1.x)*(p3.x-p1.x)+(p3.y-p1.y)*(p3.y-p1.y));
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area of triangle="<<area<<endl;
	cout<<"Address of point 1:"<<&p1<<endl;
	cout<<"Address of point 2:"<<&p2<<endl;
	cout<<"Address of point 3:"<<&p3<<endl;
	return 0;
}
