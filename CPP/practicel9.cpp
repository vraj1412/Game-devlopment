#include<iostream>
using namespace std;
int main(){
    int i , n , fect = 1;
    
    cout << "Enter Num = ";
    cin >> n;
    

    for(int i = 1; i <= n;i++){
        fect *= i;
    }
        cout<< n << " Number's Fectorial is "<< fect;
    
}