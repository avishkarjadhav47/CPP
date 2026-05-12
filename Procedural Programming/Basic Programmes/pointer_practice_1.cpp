#include<iostream>
using namespace std;
int main()
{
int x,*p,**q;
float y,*r;
cout<<"Enter x & y :";
cin>>x>>y;
p=&x;
q=&p;
r=&y;
cout<<"x= "<<x<<endl;
cout<<"y= "<<y<<endl;
cout<<"Address of x= "<<p<<endl;
cout<<"Address of p= "<<q<<endl;
cout<<"Address of y= "<<r<<endl;
cout<<"Access x using p= "<<*p<<endl;
cout<<"Access x using q= "<<**q<<endl;
cout<<"Access p using q= "<<q<<endl;
cout<<"Access y using r= "<<*r<<endl;
return 0;
}

