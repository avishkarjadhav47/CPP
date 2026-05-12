//Student Info(Another Way)
#include <iostream>
using namespace std;
 
class student_info
{
	private:
		string name,branch;
		int roll;
	public:
	    void getdata();
		void display();
		void calculate();	
};
 
void getdata()
{
	cout<<"Enter Name:"<<endl;
	getline(cin,name);
	cout<<"Enter Branch:"<<endl;
	getline(cin,branch);
	cout<<"Enter Roll Number:"<<endl;
	cin>>roll;
}

void student_info::display()
{
	cout<<"Name:"<<name<<endl;
	cout<<"Roll Number:"<<roll<<endl;
	cout<<"Branch:"<<branch<<endl;
}

int main()
{
	student_info s1;
	s1.getdata();
	s1.display();
	return 0;
}

















 
  
