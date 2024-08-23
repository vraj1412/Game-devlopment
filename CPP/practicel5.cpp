#include<iostream>
using namespace std;
int main(){

    int n1,n2,n3;

    cout <<"enter 1st no = ";
    cin >> n1;
    cout <<"enter 2nd no = ";
    cin >> n2;
    cout <<"enter 3rd no = ";
    cin >> n3;

    if(n1 > n2 && n1 > n3){
            cout << n1 <<"is Biggest";
        
    }
    else if(n2 > n1 && n2 > n3){
            cout << n2 <<"is Biggest";
        
    }
    else{
        cout << n3 <<"is Biggest";
    }



}