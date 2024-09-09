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

class derive : public base{
public:
    int b;
    void setB()
    {
        cout << "Enter B = ";
        cin >> b;
    }
};
class derive1{
public:
int c;
    void setC()
    {   
        cout << "Enter C = ";
        cin >> c;
    }
};
class derive2: public derive,public derive1{
public:
    void sum()
    {
        cout << "Value Of A * b * C = " << a * b * c;
    }
};

int main()
{
    derive2 s;
    s.setA();
    s.setB();
    s.setC();
    s.sum();
}