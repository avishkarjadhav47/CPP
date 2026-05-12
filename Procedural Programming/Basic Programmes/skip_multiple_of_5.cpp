/*#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"Enter n:";
	cin>>n;
	for(i;i<=n;++i)
	{
		if(i%5!=0)
		cout<<i<<endl;
	}
	return 0;
}*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 5 == 0)
            continue;

        cout << i << " ";
    }
    return 0;
}

