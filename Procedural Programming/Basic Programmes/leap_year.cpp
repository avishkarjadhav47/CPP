//leap year
#include <iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter year:";
	cin>>year; //cin >> not <<
	if ((year%400==0) || (year%4==0 && year%100!=0)) //if () not if () ||()
	cout<<"leap year";
	else
	cout<<"not a leap year";
	return 0;
}
