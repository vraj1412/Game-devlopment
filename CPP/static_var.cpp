#include<iostream>
using namespace std;
class base{
    public:
        static int n;
        int i = 0;
    
    base(){
        n++;
        i++;
    }
    void display(){
         cout<<"Value Of I "<< i<<endl;
    }
    static void Display(){
         cout<<"Value Of N "<< n<<endl;
        
    }
};

int base :: n = 0;

int main()
{   base a,b,c,d;
    a.display();
    b.display();
    c.display();
    d.Display();
    
    return 0;
}