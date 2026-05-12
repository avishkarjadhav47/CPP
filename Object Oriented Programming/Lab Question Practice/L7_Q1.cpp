#include<iostream>
using namespace std;
class Distance
{
	int meter,centimeter;
	public:
		void getdata(int m,int cm)
		{
			meter=m;centimeter=cm;
		}
		Distance add(Distance d)
		{
			Distance temp;
			temp.centimeter=centimeter+d.centimeter;
			temp.meter=meter+d.meter;
			if(temp.centimeter>=100)
			{
				temp.meter=temp.meter+(temp.centimeter/100);
				temp.centimeter=temp.centimeter%100;
			}
			return temp;
		}
		void showdata()
		{
			cout<<meter<<" Meters "<<centimeter<<" Centimeters"<<endl;
		}
};
int main()
{
	Distance d1,d2,d3;
	d1.getdata(12,54);
	d2.getdata(7,71);
	d3=d1.add(d2);
	d3.showdata();
	return 0;
}
