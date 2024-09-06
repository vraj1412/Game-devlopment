#include<iostream>
using namespace std;
class num{
    protected :
        int a;
    public:
        void setA(){
            cout << "Enter A = ";
            cin >>a;
        }
};
class num1{
    protected :
        int b;
    public:
        void setB(){
            cout << "Enter B = ";
            cin >>b;
        }
};
class derive : public num,public num1{
    public:
        void sum(){
            cout << "Value Of A + b = "<< a+b;
        }
};

int main()
{
    derive s;
    s.setA();
    s.setB();
    s.sum();
}