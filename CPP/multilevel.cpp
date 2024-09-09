#include <iostream>
using namespace std;
class base
{
public:
    int a;
    void setA()
    {
        cout << "Enter A = ";
        cin >> a;
    }
};
class derive : public base
{
public:
    int b;
    void setB()
    {
        cout << "Enter B = ";
        cin >> b;
    }
};
class derive1 : public derive
{
public:
    void sum()
    {
        cout << "Value Of A + b = " << a + b;
    }
};

int main()
{
    derive1 s;
    s.setA();
    s.setB();
    s.sum();
}