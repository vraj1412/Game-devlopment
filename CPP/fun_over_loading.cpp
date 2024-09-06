#include <iostream>
using namespace std;

class shape
{
public:
    void s(int r)
    {
        int s;
        s = 3.14 * r * r;
        cout << "Circle Area = " << s << endl;
    }
    void s(double s)
    {
        int sqr;
        sqr = s * s;
        cout << "Square Area = " << sqr << endl;
    }
    void s(int l, int b)
    {
        int rec;
        rec = l * b;
        cout << "Rectangle Area = " << rec << endl;
    }
    void s(double l, double b)
    {
        int tri;
        tri = (l * b) / 2;
        cout << "triangle Area = " << tri << endl;
    }
};

int main()
{
    shape a;
    a.s(10);
    a.s(14.0);
    a.s(4, 5);
    a.s(13.0, 12.0);
    return 0;
}