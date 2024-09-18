#include <iostream>
using namespace std;

class Number{
    public:
        int num1, num2;

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
    n.num1 = 10;
    n.num2 = 20;
    
    int biggest = findBiggest(n);
    cout << "The biggest number is: " << biggest << endl;
    return 0;
}