#include<iostream>
using namespace std;

class Demo {
public:
    inline int sum(int n) {
        int s = 0;
        for(int i=1;i<=n;i++)
            s += i;
        return s;
    }
};


