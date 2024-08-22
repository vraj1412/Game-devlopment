#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter Number = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k >= i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = i; k <= n; k++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}