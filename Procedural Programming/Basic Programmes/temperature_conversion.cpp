//Temperature conversion from fahrenheit to celcius
#include <iostream>
using namespace std;
int main()
{
	float f;
	cout<<"enter temperature in fahrenheit:";
	cin>>f;
	cout<<"celcius="<<(5.0/9)*(f-32); //if using float give 5.0 otherwise wrong output
}
