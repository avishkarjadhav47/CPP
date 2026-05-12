#include<iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter number: ";
    cin >> n;

    while(n > 0)
    {
        n = n / 10;
        cout<<n<<endl;
        count++;
    }

    cout << "Number of digits = " << count;
    return 0;
}

/*

#include<iostream> //wrong for n=0
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter number: ";
    cin >> n;

    for(; n > 0; n = n / 10)
    {
        count++;
    }

    cout << "Number of digits = " << count;
    return 0;
} 
*/

