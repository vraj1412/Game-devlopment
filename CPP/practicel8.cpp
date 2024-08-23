#include<iostream>
using namespace std;
int main(){
    int i , n , sum = 0,rm , ori;
    
    cout << "Enter Num = ";
    cin >> n;
    ori = n;

    
    for(int i = 1;i <= n-1;i++){
        rm = n % i;
        
        if(rm == 0){
            sum += i;
        }
    }

    if (ori == sum)
    {
        cout << ori <<" is Perfect no" << endl;
    }
    else
    {
        cout<< ori << " is not Perfect no";
    }
}