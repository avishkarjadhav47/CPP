//personal detail
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name,roll_no,course;
	cout<<"enter name:";
	getline(cin,name);
	cout<<"enter roll number:";
	getline(cin,roll_no);
	cout<<"enter course:";
	getline(cin,course);
	cout<<"name:"<<name<<endl;
	cout<<"course:"<<course<<endl;
	cout<<"roll number:"<<roll_no<<endl;
	return 0;
}
