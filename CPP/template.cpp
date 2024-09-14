#include<iostream>
using namespace std;

template <class t>
void display(t t1){
    cout<<"Display Template 1 = "<<t1<<endl;
}

template<class x,class y>
void Display(x a,y b){
    cout<<"Display Template 2 = "<< a <<"     "<< b << endl;
}

template<class t>
t sum(t a,t b){
    return a+b;
}
int main()
{
    display(100);
    display(100.100);
    display('A');

     Display(100.00,200);
     Display('a',300.30);
     Display(100,400.33);

    cout<<sum(1,2)<<endl;
    cout<<sum(5.5,3.4)<<endl;

    return 0;
}