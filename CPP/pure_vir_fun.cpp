#include<iostream>
using namespace std;

class base{
    public :
        virtual void display() = 0;
};
class derive : public base{
    public :
        void display(){
            cout<<"Derive Class Call";
        }
};

int main()
{ 
   derive d;
   base *b;
    b = &d;
    b->display();
    return 0;
}