#include<iostream>
using namespace std;
class op
{
	int x,y;
	public:
		void get();
		int sum();
		int prod();
};
inline void op::get()
{
	cout<<"Enter x,y";
	cin>>x>>y;	
}
inline int op::sum(){
	return x+y;
}
inline int op::prod(){
	return x*y;
}
int main()
{int s,p;
	op h;
	h.get();
	s=h.sum();
	p=h.prod();
	cout<<s<<" "<<p<<endl;
	return 0;
}
