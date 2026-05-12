//armstrong number
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp,k, sum = 0, count = 0;
    cout << "Enter number: ";
    cin >> n;

    temp = n;
    while(n> 0) {
        count=count+1;
        n=n/10;
    }

    n=temp;
    while( n> 0) {
        k = n% 10;
        sum=sum +pow(k, count);
        n=n/10;
    }

    if(sum == temp)
        cout << " Armstrong number";
    else
        cout << "not an Armstrong number";

    return 0;
}

