#include<iostream>
using namespace std;
class Cube
{
	private:
		int side;
	public:
	    void getside()
		{
			cout<<"Enter Side:";
			cin>>side;
		}
		inline void calculateVolume()
	    {
	    	cout<<"Volume:"<<side*side*side<<endl;
		}
};
int main()
{
    Cube c;
	c.getside();
	c.calculateVolume();
	return 0;	
}
