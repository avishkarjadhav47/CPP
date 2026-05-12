#include <iostream>
using namespace std;

// Declare
void fibonacci(int n);

int main()
{
    // Call
    fibonacci(30);

    return 0;
}

// Define
void fibonacci(int n)
{
     long long a = 0, b = 1, c;
    cout << a << " " << b << " ";

    for(int i = 3; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

