//CALL BY VALUE-->copy created -different address
//CALL BY REFERENCE-->same object - same address
//CALL BY POINTER-->address passed explicitly-same object - same address
#include<iostream>
using namespace std;

class student
{
private:
    int marks;

public:

    void getdata(int m)
    {
        marks = m;
    }

    void updated(student s,string name)   // call by value
    {
        s.marks = s.marks + 10;
        cout<<"Updated Marks of "<<name<<" = "<<s.marks<<endl;
    }

    void display(string name)
    {
        cout<<name<<" marks = "<<marks<<endl;
    }
};

int main()
{
    student s1,s2;

    s1.getdata(50);
    s2.getdata(80);

    cout<<"Before update"<<endl;
    s1.display("s1");
    s2.display("s2");

    s1.updated(s2,"s2");

    cout<<"After update"<<endl;
    s1.display("s1");
    s2.display("s2");

    return 0;
}
