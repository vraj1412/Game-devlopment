#include<iostream>
using namespace std;
int main(){
    int arr[3][3] , sum = 0;

    for(int i = 0;i < 3;i++){
        for(int j = 0; j < 3;j++){
            cout << "Enter Element In array = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            cout<<" " << arr[i][j];
            sum += arr[i][j];
        }
        cout << endl;
    }
    cout <<"Sum Of Array = "<<sum;
    return 0;
}