#include<iostream>
using namespace std;

class shape{
    public:
    shape(int r){
        int s;
        s = 4 * 3.14 * r * r;
        cout << "Shpere Area = "<< s << endl;
    }
    shape(double s){
        int sqr;
        sqr = 6*s*s;
        cout << "Cube Area = "<< sqr << endl;
    }
    shape(int l,int w,int h){
        int rec;
        rec = 2 * (w*l + h*l +h*w);
        cout << "Rectangular Prism Area = "<< rec << endl;
    }
    shape(int r,int h){
        int cylinder;
        cylinder = 2*3.14*r*h+2*3.14*r*r;
        cout << "cylinder Area = "<< cylinder<< endl;
    }

};

int main()
{
    shape shpere(19),Cube(30.0),rectanguler_prism(5,6,4),cylinder(30,20);
    return 0;
}