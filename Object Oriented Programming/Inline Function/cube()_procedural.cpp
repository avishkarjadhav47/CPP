//Inline-cube() function-procedural Programming
#include<iostream>
using namespace std;
inline int cube(int s)
{
	return(s*s*s);
}
int main()
{
	cout<<"The Cube of 3 is "<<cube(3);
	return 0;
}
