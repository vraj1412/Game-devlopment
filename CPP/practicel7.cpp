#include<iostream>
using namespace std;
int main(){
    int i , n , result = 0,rm , ori;
    
    cout << "Enter Num = ";
    cin >> n;
    ori = n;

    do
    {
        rm = n % 10;
        result += rm * rm * rm;
        n /= 10;

    } while (n != 0);

    if (ori == result)
    {
        cout << ori <<" is Armstrong no" << endl;
    }
    else
    {
        cout<< ori << " no is not Armstrong no";
    }
}