#include<iostream>
using namespace std;

class StudentResult
{
    float m1, m2, m3, total, avg;

private:
    void totalmarks()
    {
        total = m1 + m2 + m3;
        cout << "Total Marks: " << total << endl;
        avgmarks();
    }

    void avgmarks()
    {
        avg = total / 3.0;
        cout << "Average Marks: " << avg << endl;
        result();
    }

    void result()
    {
        if (avg >= 75)
            cout << "Grade: Excellent" << endl;
        else if (avg >= 50)
            cout << "Grade: Good" << endl;
        else if (avg >= 35)
            cout << "Grade: Satisfactory" << endl;
        else
            cout << "Need Improvement." << endl;
    }

public:
    void getmarks()
    {
        cout << "Enter Marks: ";
        cin >> m1 >> m2 >> m3;
        totalmarks();   // Public calling private
    }
};

int main()
{
    StudentResult s1;
    s1.avgmarks();   // Only public function accessible
    return 0;
}

