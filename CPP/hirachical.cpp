#include <iostream>
using namespace std;
class base{
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
    void sum()
    {
        cout << "Value Of A + b = " << a + b <<endl;
    }
};
class derive1 : public base
{
public:
int c;
    void setC()
    {
        cout << "Enter C = ";
        cin >> c;
    }
    void sum()
    {
        cout << "Value Of A + C = " << a + c;
    }
};

int main()
{   
    derive p;
    p.setA();
    p.setB();
    p.sum();
    derive1 s;
    s.setA();
    s.setC();
    s.sum();
}