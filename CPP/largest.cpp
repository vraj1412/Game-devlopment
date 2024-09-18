#include <iostream>
using namespace std;

class Number{
    public:
        int num1, num2;
        get_data(){
            cout<<"Enter Number 1 :";
            cin>>num1;
            cout<<"Enter Number 2 :";
            cin>>num2;
        
        }

    friend int findBiggest(Number n);
};

int findBiggest(Number n){
    int biggest;
    if(n.num1 > n.num2){
        biggest = n.num1;
    }
    else{
        biggest = n.num2;
    }
    return biggest;
}

int main(){
    Number n;
    n.get_data();
    
    int biggest = findBiggest(n);
    cout << "The biggest number is: " << biggest << endl;
    return 0;
}