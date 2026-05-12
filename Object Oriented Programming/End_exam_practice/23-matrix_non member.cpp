#include<iostream>
using namespace std;

class matrix
{
    int a[5][5];
    int n;

public:
    matrix(int z)
    {
        n = z;
    }

    void get()
    {
        cout << "Enter matrix Elements:\n";
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void read()
    {
        cout << "Result matrix is:\n";
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend matrix sum(matrix, matrix);   // friend declaration
};

// Non-member function
matrix sum(matrix m1, matrix m2)
{
    matrix temp(m1.n);   // use size from object

    for(int i = 0; i < m1.n; i++)
    {
        for(int j = 0; j < m1.n; j++)
        {
            temp.a[i][j] = m1.a[i][j] + m2.a[i][j];
        }
    }
    return temp;
}

int main()
{
    matrix k(3), l(3), m(3);

    k.get();
    l.get();

    m = sum(k, l);   // non-member function call

    m.read();

    return 0;
}
