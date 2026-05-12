//multiplication table
#include <iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"enter integer:";
	cin>>n;
	
	//for(i=1;i<=10;i++)
	//cout<<n*i<<endl;
	//return 0;
	
	/*while(i<=10)
	{
	 cout<<n*i<<endl;
	 i++;
    }*/
    
    do{cout<<n*i<<endl;
	 i++;
	}while (i<=10);
	return 0;
}
