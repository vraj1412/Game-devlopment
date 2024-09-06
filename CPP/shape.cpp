#include<iostream>
using namespace std;

class shape{
    public:
    shape(int r){
        int s;
        s = 3.14 * r * r;
        cout << "Circle Area = "<< s << endl;
    }
    shape(double s){
        int sqr;
        sqr = s*s;
        cout << "Square Area = "<< sqr << endl;
    }
    shape(int l,int b){
        int rec;
        rec = l * b;
        cout << "Rectangle Area = "<< rec << endl;
    }
    shape(double l,double b){ 
        int tri;
        tri = (l*b)/2;
        cout << "triangle Area = "<< tri << endl;
    }

};

int main()
{
    shape circle(19),square(33.0),rectangle(5,6),triangle(30.0,20.0);
    return 0;
}