#include<iostream>
using namespace std;
void bill(){
    int qty , rate , amt , dic , bill , gst , netbill;
    cout << "Enter QTY = ";
    cin >> qty;
    cout << "Enter Rate = ";
    cin >> rate;

    amt = qty * rate;
    dic = amt * 0.10;
    bill = amt - dic;
    gst = bill * 0.18;
    netbill = bill + gst;

    cout<<"Qty \tRate \tAmt \tDic \tBill \tGst \tNetbill "<<endl;
    cout<<qty <<"\t"<<rate <<"\t"<<amt<<"\t"<<dic<<"\t"<<bill<<"\t"<<gst<<"\t"<<netbill;
}
int main(){

    bill();
    return 0;
}