#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void showA() {
        cout << "This is class A" << endl;
    }
};

// Class B inherits from A (Multilevel part)
class B : public A {
public:
    void showB() {
        cout << "This is class B (Derived from A)" << endl;
    }
};

// Another base class C
class C {
public:
    void showC() {
        cout << "This is class C" << endl;
    }
};

// Class D inherits from B and C (Multiple inheritance)
class D : public B, public C {
public:
    void showD() {
        cout << "This is class D (Derived from B and C)" << endl;
    }
};

int main() {
    D obj;

    obj.showA();  // From A (via B)
    obj.showB();  // From B
    obj.showC();  // From C
    obj.showD();  // From D

    return 0;
}
