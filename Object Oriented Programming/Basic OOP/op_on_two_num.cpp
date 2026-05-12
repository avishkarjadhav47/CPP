//Arithmatic Operations
#include <iostream>
using namespace std;

class ClassName
{
private:
    int a, b;

public:

    // Function to take input
    void getdata()
    {
        cout << "Enter a & b: ";
        cin >> a >> b;
    }

    // Function to display data
    void display()
    {
        cout << "a: " << a << " b: " << b << endl;
    }

    // Function to perform operation
    void calculate()
    {
        double add, sub, multiply, divide;

        add = a + b;
        sub = a - b;
        multiply = a * b;

        if (b != 0)
            divide = (double)a / b;
        else
        {
            cout << "Division by zero not allowed!" << endl;
            return;
        }

        cout << "Addition: " << add << endl;
        cout << "Subtraction: " << sub << endl;
        cout << "Multiplication: " << multiply << endl;
        cout << "Division: " << divide << endl;
    }
};   // ? CLASS ENDS HERE

int main()
{
    ClassName obj;
    obj.getdata();
    obj.display();
    obj.calculate();

    return 0;
}
