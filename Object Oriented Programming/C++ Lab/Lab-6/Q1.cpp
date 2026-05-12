#include <iostream>
using namespace std;

class Book {
public:
    string title;
    int *price;

    Book(string t, int p) {
        title = t;
        price = new int(p);
    }

    void display() {
        cout << "Title: " << title << ", Price: " << *price << endl;
    }
};

int main() {
    Book b1("C++", 500);
    Book b2 = b1;   // Shallow copy

    b1.display();
    b2.display();

    return 0;
}
