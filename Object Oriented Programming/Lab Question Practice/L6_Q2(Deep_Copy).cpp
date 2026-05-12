//Deep Copy
#include<iostream>
#include<string>
using namespace std;
class Book
{
	int *p;
	string *n;
	public:
		Book(int x,string y)
		{
			p=new int(x);
			n=new string(y);
		}
		Book(const Book &b)
		{
			p=new int(*b.p);
			n=new string(*b.n);
		}
		void showInfo()
		{
			cout<<"Book Name:"<<*n<<endl;
			cout<<"Book Price:"<<*p<<endl;
		}
		~Book()
		{
			delete p;
			delete n;
		}
};
int main()
{
   Book b1(734,"Wings Of Fire");
   Book b2=b1;
   Book b3=b1;
   cout<<"Book-1 Information:"<<endl;
   b1.showInfo();
   cout<<endl;
   cout<<"Book-2 Information:"<<endl;
   b2.showInfo();
   cout<<endl;
   cout<<"Book-3 Information:"<<endl;
   b2.showInfo();
   return 0;
}
