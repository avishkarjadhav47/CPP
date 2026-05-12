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

    matrix sum(matrix h)
    {
        matrix temp(n);   // important

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                temp.a[i][j] = a[i][j] + h.a[i][j];
            }
        }
        return temp;
    }
};

int main()
{
    matrix k(3), l(3), m(3);

    k.get();
    l.get();

    m = k.sum(l);   // member function call

    m.read();

    return 0;
}
