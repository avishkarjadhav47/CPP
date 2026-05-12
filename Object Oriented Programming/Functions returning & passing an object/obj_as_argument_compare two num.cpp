//Object as argument of a function
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    void set(int v) {
        value = v;
    }

    void compare(Number n) {   // Object as argument
        if (value > n.value)
            cout << "First number is greater\n";
        else if (value < n.value)
            cout << "Second number is greater\n";
        else
            cout << "Both are equal\n";
    }
};

int main() {
    Number n1, n2;

    n1.set(10);
    n2.set(20);

    n1.compare(n2);   // Passing object

    return 0;
}
