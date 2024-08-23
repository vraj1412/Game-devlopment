#include <iostream>
using namespace std;
int main()
{
    int i, n, a = 0, b = 1, c;

    cout << "Enter Num = ";
    cin >> n;

    cout << a << "\t";
    cout << b << "\t";
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        cout << c << "\t";
        b = c;
    }
}