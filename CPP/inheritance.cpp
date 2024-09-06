#include<iostream>
using namespace std;

class base{
    int a , b;
    public :
        int c;
        void getdata(){
           a = 100;
           b = 200;
        }
        void display(){
            cout<<"A = "<< a << endl;
            cout<<"B = "<< b <<endl;
        }
};
class derive : public base{
    public:
    void displaydata(){
        c = 30;
        getdata();
        display();

        cout<<"c = "<< c << endl; 
    }
};
int main()
{
    derive obj;
    obj.displaydata();
    return 0;
}