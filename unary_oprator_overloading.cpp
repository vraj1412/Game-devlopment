#include <iostream>
using namespace std;
class complax{
    int a, b;

public:
    void setdata(int x, int y){
    
        cout<<"Enter Value Of A = ";
        cin >> x;
        cout<<"Enter Value Of B = ";
        cin>>y;
        a = x;
        b = y;
    
    }
    void display(){
        
        cout << "Value Of A = " << a << endl;
        cout << "Value Of B = " << b << endl;
    
    }

    void operator-(){

        a = -a;
        b = -b;
    }
};
int main(){

    complax v;
    v.setdata(3, -9);
    v.display();
    -v;
    v.display();
    return 0;

}