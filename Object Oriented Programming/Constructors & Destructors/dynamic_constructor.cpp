#include<iostream>
using namespace std;
class Student
{
	private:
		int *marks,n;
	public:
		Student(int size)
		{
		   n=size;
		   marks=new int[n];
		   cout<<"Enter "<<n<<" marks:";
		   for(int i=0;i<n;i++)
		   {
		   	cin>>marks[i];
			}	
		}
		void show()
		{
			cout<<"Marks are:"<<endl;
		   for(int i=0;i<n;i++)
		   {
		   	cout<<marks[i]<<endl;
			}
		}
		
};
int main()
{
	int size;
	cout<<"Enter Number of subjects:";
	cin>>size;
	Student s1(size);
	s1.show();
	return 0;
}
