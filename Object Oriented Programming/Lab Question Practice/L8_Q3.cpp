#include<iostream>
using namespace std;
class NumberUtility
{
        int a,b,c;
  public:
  	    inline void MAX(int a,int b,int c)
  	    {
  	    	cout<<"MAX="<<((a>b&&a>c)?a:(b>c?b:c))<<endl;
		}
  	    inline void MIN(int a,int b,int c)
  	    {
  	    	cout<<"MIN="<<((a<b&&a<c)?a:(b<c?b:c))<<endl;
		}
};
int main()
{ 
   NumberUtility n;	
   n.MAX(3,4,5);
   n.MIN(3,4,5);
   return 0;
}
