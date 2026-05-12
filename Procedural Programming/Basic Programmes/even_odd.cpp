#include <iostream>
using namespace std;

// Declare
void evenOdd(int n);

int main()
{
    int n;
    cout<<"Enter a number n:"
    cin >> n;

    // Call
   evenOdd(n);

    return 0;
}

// Define
void evenOdd(int n)
{
    if(n % 2 == 0)
        cout<<"Even";
    else
        cout<<"Odd";
}

