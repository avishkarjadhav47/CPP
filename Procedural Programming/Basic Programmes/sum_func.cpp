#include <iostream>
using namespace std;

int fun(int a, int b);

int main()
{
    int x, y;
    cout<<"Enter x & y:";
    cin >> x >> y;

    cout << fun(x, y);
    return 0;
}

int fun(int a, int b)
{
    return a + b;
}

